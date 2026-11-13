
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0122cbac(long param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  if (((DAT_0537d558 == 0) || (*(long *)(DAT_0537d558 + 0x28) == 0)) ||
     (*(int *)(DAT_0537d558 + 0x80) != 1)) {
    if (DAT_04c487d4 != -1) {
      puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar1 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar1 + 4) & 1) != 0) {
        return 0;
      }
    }
    if (DAT_0514f764 == '\x01') {
      iVar2 = *(int *)(param_1 + 8);
      iVar3 = *(int *)(param_1 + 0xc);
      if (((((((((int)DAT_0514e4c0 == 1) && ((int)DAT_0514e448 == iVar2)) &&
              (DAT_0514e448._4_4_ == iVar3)) ||
             (((DAT_0514e4c0._4_4_ == 1 && (DAT_0514e458 == iVar2)) && (DAT_0514e45c == iVar3)))) ||
            (((DAT_0514e4c8 == 1 && (DAT_0514e468 == iVar2)) && (DAT_0514e46c == iVar3)))) ||
           (((_DAT_0514e4cc == 1 && ((int)DAT_0514e478 == iVar2)) && (DAT_0514e478._4_4_ == iVar3)))
           ) || (((((int)DAT_0514e4d0 == 1 && ((int)DAT_0514e488 == iVar2)) &&
                  (DAT_0514e488._4_4_ == iVar3)) ||
                 (((DAT_0514e4d0._4_4_ == 1 && ((int)DAT_0514e498 == iVar2)) &&
                  (DAT_0514e498._4_4_ == iVar3)))))) ||
         (((((int)DAT_0514e4d8 == 1 && ((int)DAT_0514e4a8 == iVar2)) &&
           (DAT_0514e4a8._4_4_ == iVar3)) ||
          (((DAT_0514e4d8._4_4_ == 1 && ((int)DAT_0514e4b8 == iVar2)) &&
           (DAT_0514e4b8._4_4_ == iVar3)))))) {
        return 1;
      }
    }
  }
  return 0;
}

