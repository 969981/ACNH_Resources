
void _INIT_433(void)

{
  if ((DAT_04c72908 & 1) == 0) {
    DAT_04c728f8 = 0;
    DAT_04c72900 = 0;
    DAT_04c72908 = 1;
  }
  return;
}

