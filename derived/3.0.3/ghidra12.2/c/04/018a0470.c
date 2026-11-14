
bool FUN_018a0470(long param_1,byte *param_2,undefined4 param_3,undefined8 *param_4)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  bool bVar9;
  undefined4 uVar10;
  int iVar11;
  long lVar12;
  undefined1 *__src;
  long lVar13;
  undefined4 uVar14;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_134;
  undefined8 local_12c;
  undefined8 local_124;
  undefined *local_118;
  undefined1 *local_110;
  int local_108;
  undefined1 local_104 [127];
  undefined1 local_85;
  undefined4 local_80;
  undefined2 local_7c;
  undefined8 local_78;
  
  puVar7 = PTR_DAT_04bb4008;
  puVar6 = PTR_DAT_04bb27c0;
  if (*(long *)(param_1 + 0x48) != 0 && *(long *)PTR_DAT_04bb27c0 != 0) {
    uVar3 = *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x230);
    local_148 = 0xffffffff00000000;
    local_140 = 0;
    local_138 = 0;
    local_134 = 0x3f800000;
    local_110 = local_104;
    local_108 = 0x80;
    local_85 = 0;
    local_104[0] = 0;
    local_118 = PTR_DAT_04bb2d88 + 0x10;
    local_78 = 0;
    local_7c = 0;
    local_80 = 7;
    lVar13 = *(long *)PTR_DAT_04bb4008;
    local_12c = 0;
    local_124 = 0;
    if (lVar13 != 0) {
      lVar12 = FUN_0251bdc4(param_2,0);
      if (lVar12 == 0) {
        return false;
      }
      uVar4 = *(undefined4 *)(lVar12 + 4);
      uVar14 = FUN_01a12580(*(undefined8 *)puVar7,param_3);
      uVar10 = FUN_01a1159c(lVar13,param_3);
      __src = (undefined1 *)FUN_01a113c0(lVar13,param_3);
      puVar8 = local_110;
      local_138 = *(undefined4 *)(param_4 + 1);
      local_148 = CONCAT44(0x7d,(undefined4)local_148);
      local_140 = *param_4;
      local_134 = CONCAT44(uVar4,uVar14);
      local_12c = CONCAT44(param_3,uVar10);
      local_124 = CONCAT44(local_124._4_4_,1);
      if (local_110 != __src) {
        lVar13 = 0;
        do {
          if (__src[lVar13] == '\0') goto LAB_018a05f4;
          if (__src[lVar13 + 1] == '\0') {
            lVar13 = lVar13 + 1;
            goto LAB_018a05f4;
          }
          if (__src[lVar13 + 2] == '\0') {
            lVar13 = lVar13 + 2;
            goto LAB_018a05f4;
          }
          lVar13 = lVar13 + 3;
        } while (lVar13 != 0x80001);
        lVar13 = 0;
LAB_018a05f4:
        iVar11 = (int)lVar13;
        if (local_108 <= (int)lVar13) {
          iVar11 = local_108 + -1;
        }
        memcpy(local_110,__src,(long)iVar11);
        puVar8[iVar11] = 0;
      }
      iVar11 = FUN_007402e0(*(undefined8 *)puVar6,&local_148,uVar3,1);
      bVar5 = *param_2;
      piVar1 = (int *)(param_1 + 0x74c);
      bVar9 = 7 < bVar5;
      if (bVar9) {
        bVar5 = 0xff;
      }
      piVar2 = piVar1 + ((long)(char)bVar5 & 0xffffffff);
      if (bVar9) {
        piVar2 = piVar1;
      }
      *piVar2 = iVar11;
      bVar5 = *param_2;
      bVar9 = 7 < bVar5;
      if (bVar9) {
        bVar5 = 0xff;
      }
      piVar2 = piVar1 + ((long)(char)bVar5 & 0xffffffff);
      if (bVar9) {
        piVar2 = piVar1;
      }
      return *piVar2 != *(int *)PTR_DAT_04bb3238;
    }
  }
  return false;
}

