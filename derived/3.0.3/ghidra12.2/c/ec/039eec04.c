
void FUN_039eec04(long param_1,long param_2,long param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  char cVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 local_2d8;
  undefined1 *local_2d0;
  undefined8 uStack_2c8;
  undefined1 auStack_2c0 [16];
  long local_2b0;
  long local_2a8;
  undefined1 local_29d;
  long local_298;
  undefined1 local_28b;
  undefined1 local_288;
  byte local_287;
  undefined4 local_178;
  undefined4 local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  long local_108;
  undefined8 local_68;
  int local_60;
  
  if ((0 < *(int *)(*(long *)(param_3 + 0x10) + 0x3c) &&
       (*(uint *)(*(long *)(param_3 + 0x10) + 0x1c) & *(uint *)(param_3 + 0x18)) != 0) &&
     ((*(byte *)(param_1 + 10) >> 1 & 1) == 0)) {
    uVar12 = *(uint *)(param_3 + 0x28);
    uVar3 = *(uint *)(param_3 + 0x30) | 0xf0;
    if (*(int *)(param_3 + 0x20) != 7) {
      uVar3 = *(uint *)(param_3 + 0x30);
    }
    uVar2 = uVar12 >> 3 & 4 | (uVar12 >> 2 & 1) << 3;
    uVar13 = uVar2 | uVar12 & 0x10;
    if (*(char *)(param_1 + 9) == '\x02') {
      uVar13 = uVar13 | 0x20;
    }
    else if (*(char *)(param_1 + 9) == '\x01') {
      uVar13 = uVar2 | 0x10;
    }
    FUN_039ea2a8(auStack_2c0,param_2,param_1,*(uint *)(param_3 + 0x18),
                 *(undefined4 *)(param_3 + 0x1c),*(int *)(param_3 + 0x20),uVar12,uVar13,uVar3,
                 *(undefined4 *)(param_3 + 0x38),param_1 + 0x328);
    uVar3 = *(uint *)(param_3 + 0x24);
    if (uVar3 != local_287) {
      local_287 = (byte)uVar3;
      uVar3 = uVar3 & 0xff;
      uVar12 = uVar3;
      if (*(uint *)(local_2b0 + 0x10) <= uVar3) {
        uVar12 = 0;
      }
      lVar10 = *(long *)(local_2b0 + 0x18) + (ulong)uVar12 * 0x410;
      *(byte *)(lVar10 + 0x409) = *(byte *)(lVar10 + 0x409) | 1;
      if (*(uint *)(local_2b0 + 0x10) <= uVar3) {
        uVar3 = 0;
      }
      local_298 = *(long *)(local_2b0 + 0x18) + (ulong)uVar3 * 0x410 + 0x390;
      local_178 = 0xffffffff;
    }
    puVar5 = PTR_DAT_04bd1630;
    puVar4 = PTR_DAT_04bb3508;
    local_110 = *(float *)(param_1 + 0x350);
    local_11c = *(float *)(param_1 + 0x344) * local_110;
    local_118 = local_110 * *(float *)(param_1 + 0x348);
    lVar14 = *(long *)PTR_DAT_04bd1630;
    local_114 = local_110 * *(float *)(param_1 + 0x34c);
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
    if (lVar10 == 0) {
      iVar6 = nn::os::GetCurrentCoreNumber();
    }
    else {
      iVar6 = (int)lVar10 + -1;
    }
    local_2d8 = CONCAT44(local_2d8._4_4_,iVar6);
    lVar16 = *(long *)puVar5;
    uVar15 = *(undefined8 *)(lVar14 + (long)iVar6 * 0x30 + 0x20);
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
    if (lVar10 == 0) {
      iVar6 = nn::os::GetCurrentCoreNumber();
    }
    else {
      iVar6 = (int)lVar10 + -1;
    }
    local_2d8 = CONCAT44(local_2d8._4_4_,iVar6);
    lVar16 = lVar16 + (long)iVar6 * 0x30;
    plVar1 = (long *)(param_1 + 0x360);
    local_60 = *(int *)(lVar16 + 0x28) + (*(int *)(lVar16 + 0x18) - *(int *)(lVar16 + 0x20));
    local_28b = (undefined1)*(undefined4 *)(param_3 + 0x34);
    local_120 = *(undefined4 *)(param_3 + 0x40);
    local_288 = (undefined1)*(undefined4 *)(param_3 + 0x3c);
    local_29d = (undefined1)*(undefined4 *)(param_3 + 0x44);
    local_68 = uVar15;
    uVar8 = (**(code **)(*(long *)(param_1 + 0x360) + 0x10))(plVar1);
    if ((uVar8 & 1) != 0) {
      local_2d0 = auStack_2c0;
      uStack_2c8 = 0;
      local_2d8 = (ulong)*(uint *)(param_3 + 0x40) << 0x20;
      (**(code **)*plVar1)(plVar1,&local_2d8);
    }
    (**(code **)PTR_DAT_04bcf2d8)(*(undefined4 *)(param_1 + 0x354),*(undefined8 *)(param_2 + 0xb8));
    (**(code **)PTR_DAT_04bcfdf8)(*(undefined4 *)(param_1 + 0x358),*(undefined8 *)(param_2 + 0xb8));
    uVar3 = *(uint *)(param_3 + 0x28);
    cVar9 = *(char *)(param_1 + 0xd);
    uVar12 = uVar3;
    if (((uVar3 >> 0x17 & 1) != 0) && (cVar9 == -1)) {
      cVar9 = (char)*(undefined4 *)(param_3 + 0x24);
      *(char *)(param_1 + 0xd) = cVar9;
      uVar12 = *(uint *)(param_3 + 0x28);
    }
    plVar11 = (long *)(param_3 + 0x48);
    iVar6 = *(int *)(param_3 + 0x2c);
    uVar2 = 0;
    if (*(int *)(param_3 + 0x24) == (int)cVar9) {
      uVar2 = uVar12 >> 0x18 & 1;
    }
    uVar7 = (**(code **)(*plVar11 + 0x10))(plVar11);
    uVar13 = 2;
    if (uVar2 == 0 && (uVar3 & 0x800000) == 0) {
      uVar13 = 0;
    }
    local_2d8 = CONCAT44(local_2d8._4_4_,*(undefined4 *)(param_3 + 0x18));
    (*(code *)(&PTR_LAB_04b6bab0)
              [uVar12 >> 2 & 0x10 | (uVar12 & 1) << 3 | (uint)(iVar6 != 0xffff) << 2 | uVar13 |
               uVar7 & 1])
              (*(undefined8 *)(*(long *)(param_3 + 0x10) + 0x28),
               *(undefined4 *)(*(long *)(param_3 + 0x10) + 0x3c),auStack_2c0,&local_2d8,
               *(undefined4 *)(param_3 + 0x2c),1,plVar11);
    uVar8 = (**(code **)(*plVar1 + 0x10))(plVar1);
    if ((uVar8 & 1) != 0) {
      uStack_2c8 = 0;
      local_2d8 = CONCAT44(*(undefined4 *)(param_3 + 0x40),2);
      local_2d0 = auStack_2c0;
      (**(code **)*plVar1)(plVar1,&local_2d8);
    }
    if (local_108 != 0) {
      (**(code **)PTR_DAT_04bcfe30)(*(undefined8 *)(local_2a8 + 0xb8),1);
    }
  }
  return;
}

