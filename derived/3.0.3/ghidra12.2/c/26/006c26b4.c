
void FUN_006c26b4(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  long lVar3;
  
  iVar1 = *param_2;
  if (iVar1 == 0x1e) {
    if (*(char *)(*(long *)PTR_DAT_04bb2260 + 0x108) == '\0') {
      if (*(long *)PTR_DAT_04bb3960 != 0) {
        FUN_009b4cac();
      }
    }
    else if (*(long *)PTR_DAT_04bb3960 != 0) {
      FUN_009b48a0();
    }
  }
  else if (iVar1 == 0x10) {
    FUN_007c2b94();
  }
  else if (iVar1 == 0xf) {
    if (*(int *)(*(long *)PTR_DAT_04bb2258 + 0x32c) == 2) {
      if (*(char *)(*(long *)PTR_DAT_04bb2118 + 0x548) != '\0') goto LAB_006c2788;
      *(undefined2 *)(*(long *)PTR_DAT_04bb2118 + 0x548) = 1;
      if ((*(long *)PTR_DAT_04bb2200 == 0) ||
         (lVar3 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x60), *(int *)(lVar3 + 0x38) != 0))
      goto LAB_006c2788;
      puVar2 = (undefined1 *)(lVar3 + 0x48);
    }
    else {
      if ((*(int *)(*(long *)PTR_DAT_04bb2258 + 0x32c) != 0) ||
         (lVar3 = *(long *)PTR_DAT_04bb2118, *(char *)(lVar3 + 0x548) == '\0')) goto LAB_006c2788;
      *(undefined1 *)(lVar3 + 0x548) = 0;
      if (*(char *)(lVar3 + 0x549) != '\0') {
        nn::oe::SetFocusHandlingMode(0);
      }
      *(undefined1 *)(lVar3 + 0x549) = 0;
      if ((*(long *)PTR_DAT_04bb2200 == 0) ||
         (lVar3 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x60), *(int *)(lVar3 + 0x38) == 0))
      goto LAB_006c2788;
      puVar2 = (undefined1 *)(lVar3 + 0x58);
    }
    *puVar2 = 1;
  }
LAB_006c2788:
  if (*(long *)PTR_DAT_04bb2268 != 0) {
    *(int *)(*(long *)PTR_DAT_04bb2268 + 0x30) = *param_2;
  }
  return;
}

