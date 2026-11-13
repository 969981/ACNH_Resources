
void FUN_0118d020(long param_1)

{
  undefined *puVar1;
  int iVar2;
  uint *puVar3;
  long lVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  undefined1 *__src;
  undefined *local_148;
  undefined8 local_140;
  float local_138;
  undefined8 local_134;
  undefined8 local_12c;
  undefined8 local_124;
  undefined1 *local_118;
  undefined1 *local_110;
  int local_108;
  undefined1 local_104 [127];
  undefined1 local_85;
  undefined4 local_80;
  undefined2 local_7c;
  undefined8 local_78;
  float local_6c;
  undefined4 local_68;
  float local_64;
  undefined *local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined1 local_24 [4];
  
  lVar4 = DAT_04c93e08;
  if (DAT_04c93e08 != 0) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_140 = "EventPlazaBuilt";
    local_148 = puVar1;
    uVar6 = FUN_0273f0a0(&local_148);
    local_50 = PTR_DAT_04bbb980 + 0x10;
    uVar6 = (uVar6 & 1) - (uint)*(ushort *)(DAT_050d57c8 + 0x298);
    if (uVar6 < *(uint *)(DAT_050d57c8 + 0x278)) {
      local_48 = *(undefined8 *)(*(long *)(DAT_050d57c8 + 0x280) + (long)(int)uVar6 * 8);
    }
    else {
      local_48 = 0;
    }
    lVar8 = DAT_050d57c8 + 0x20;
    local_60 = PTR_DAT_04bb2010 + 0x10;
    local_58 = 0;
    local_140 = (char *)FUN_011a1820(&local_50);
    local_148 = puVar1;
    FUN_00979900(&local_148,lVar8,&local_60);
    local_64 = (float)local_58._4_4_ * 5.0;
    local_6c = (float)(int)local_58 * 5.0;
    if ((*(long *)PTR_DAT_04bb27c8 == 0) ||
       (lVar8 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0x90), lVar8 == 0)) {
      local_68 = 0xc3fa0000;
    }
    else {
      if (DAT_04c487d4 == -1) {
        uVar7 = 7;
      }
      else {
        local_148 = (undefined *)CONCAT44(local_148._4_4_,1);
        puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
        if (0xff < (uint)(int)DAT_04c487d4) {
          puVar3 = (uint *)PTR_DAT_04bc39f8;
        }
        uVar7 = 7;
        if ((*puVar3 & 2) != 0) {
          uVar7 = 5;
        }
      }
      local_148 = (undefined *)CONCAT44(local_148._4_4_,uVar7);
      local_24[0] = 0;
      local_68 = FUN_00962700(lVar8,&local_6c,&local_148,1,local_24);
    }
    local_110 = local_104;
    local_148 = (undefined *)0x3c00000000;
    local_134 = 0x3f800000;
    local_108 = 0x80;
    local_85 = 0;
    local_104[0] = 0;
    local_78 = 0;
    local_7c = 0;
    local_12c = 0;
    local_124 = 0;
    local_140 = (char *)CONCAT44(local_68,local_6c);
    local_118 = &DAT_048fc708;
    local_80 = 7;
    local_138 = local_64;
    __src = (undefined1 *)FUN_011a1820(&local_50);
    puVar5 = local_110;
    if (local_110 != __src) {
      lVar8 = 0;
      do {
        if (__src[lVar8] == '\0') goto LAB_0118d270;
        if (__src[lVar8 + 1] == '\0') {
          lVar8 = lVar8 + 1;
          goto LAB_0118d270;
        }
        if (__src[lVar8 + 2] == '\0') {
          lVar8 = lVar8 + 2;
          goto LAB_0118d270;
        }
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
      lVar8 = 0;
LAB_0118d270:
      iVar2 = (int)lVar8;
      if (local_108 <= (int)lVar8) {
        iVar2 = local_108 + -1;
      }
      memcpy(local_110,__src,(long)iVar2);
      puVar5[iVar2] = 0;
    }
    uVar7 = FUN_007402e0(lVar4,&local_148,(ulong)local_148 & 0xffffffff,0);
    *(undefined4 *)(param_1 + 8) = uVar7;
  }
  return;
}

