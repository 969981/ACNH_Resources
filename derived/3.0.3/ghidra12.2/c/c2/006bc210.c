
void _INIT_1056(void)

{
  if ((DAT_04c82620 & 1) == 0) {
    DAT_04c82620 = 1;
    DAT_04c82600 = 0;
    DAT_04c82608 = 0;
    DAT_04c82610 = 0;
    DAT_04c82618 = 0;
    FUN_006bc8e0();
    return;
  }
  return;
}

