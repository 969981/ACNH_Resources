
void FUN_0034e324(undefined1 *param_1)

{
  long lVar1;
  
  (**(code **)PTR_DAT_04bcf5e0)(*(undefined8 *)(param_1 + 8));
  lVar1 = *(long *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x100) != 0) {
      (**(code **)PTR_DAT_04bcf348)(lVar1);
      free(*(void **)(lVar1 + 0x100));
      *(undefined8 *)(lVar1 + 0x100) = 0;
      *(undefined8 *)(lVar1 + 0x108) = 0;
    }
    if (*(void **)(lVar1 + 0x110) != (void *)0x0) {
      free(*(void **)(lVar1 + 0x110));
      *(undefined8 *)(lVar1 + 0x110) = 0;
    }
    *(undefined8 *)(lVar1 + 0x188) = 0;
    free(*(void **)(param_1 + 0xd8));
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  *param_1 = 0;
  return;
}

