
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_038261f4(long param_1,undefined1 *param_2,int *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 local_50;
  undefined4 local_48;
  int local_40;
  int local_3c;
  undefined *local_38;
  int local_30;
  int iStack_2c;
  int local_24;
  
  puVar1 = PTR_DAT_04bb27c8;
  if (*(char *)(param_1 + 9) == '\0') {
    local_30 = *param_3;
    iStack_2c = param_3[1];
    local_38 = PTR_DAT_04bb2010 + 0x10;
    lVar3 = *(long *)PTR_DAT_04bb27c8;
    if (*(char *)(param_1 + 8) != '\0') {
      if ((lVar3 == 0) || (lVar5 = *(long *)(lVar3 + 0xa8), lVar5 == 0)) {
        uVar4 = 0;
        uVar6 = 0;
        uVar8 = 0;
        uVar7 = 0;
      }
      else {
        uVar4 = *(int *)(lVar5 + 0x38) - 1;
        uVar7 = *(int *)(lVar5 + 0x3c) - 1;
        uVar8 = uVar4 & (int)uVar4 >> 0x1f;
        uVar4 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
        uVar6 = uVar7 & (int)uVar7 >> 0x1f;
        uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
      }
      if ((((local_30 < (int)uVar8) || ((int)uVar4 < local_30)) || (iStack_2c < (int)uVar6)) ||
         ((int)uVar7 < iStack_2c)) goto LAB_03826394;
    }
    local_50 = CONCAT44(local_50._4_4_,7);
    local_24 = 7;
    local_40 = 7;
    local_3c = 7;
    if (((((lVar3 != 0) && (*(long *)(lVar3 + 0xa8) != 0)) &&
         ((uVar2 = FUN_0094924c(lVar3 + 0x28,&local_38,&local_50,&local_3c,&local_24,&local_40),
          (uVar2 & 1) != 0 && (((int)local_50 == 5 && (local_24 == 5)))))) && (local_3c == 5)) &&
       (local_40 == 5)) {
      local_50 = 0xffffffffffffffff;
      local_48 = 0x1ff;
      local_24 = 7;
      local_50 = 0xffffffffffffff7f;
      local_24 = 7;
      local_48 = 0x1ff;
      lVar3 = *(long *)puVar1;
      if (((lVar3 == 0) || (*(long *)(lVar3 + 0xa8) == 0)) ||
         (uVar2 = FUN_009499b0(lVar3 + 0x28,&local_38,&local_50), (uVar2 & 1) == 0)) {
LAB_03826394:
        *param_2 = 1;
        return;
      }
    }
  }
  *param_2 = 0;
  return;
}

