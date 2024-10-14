

*index.html*
```
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Nature Website</title>
    <link rel="stylesheet" href="styles.css">
</head>
<body>
    <!-- Header Section -->
    <header>
        <nav>
            <ul>
                <li><a href="#home">Home</a></li>
                <li><a href="#about">About</a></li>
                <li><a href="#gallery">Gallery</a></li>
                <li><a href="#contact">Contact</a></li>
            </ul>
        </nav>
    </header>

    <!-- Main Content -->
    <main>
        <!-- Hero Section -->
        <section id="home">
            <h1>Welcome to Nature Website</h1>
            <p>Explore the beauty of nature...</p>
            <button>Learn More</button>
        </section>

        <!-- About Section -->
        <section id="about">
            <h2>About Us</h2>
            <p>We're passionate about nature...</p>
        <!-- Contact Section -->
        <section id="contact">
            <h2>Contact Us</h2>
            <form>
                <input type="text" placeholder="Name">
                <input type="email" placeholder="Email">
                <textarea placeholder="Message"></textarea>
                <button>Send</button>
            </form>
        </section>
    </main>

    <!-- Footer Section -->
    <footer>
        <p>&copy; 2023 Nature Website</p>
    </footer>

    <script src="script.js"></script>
</body>
</html>
```