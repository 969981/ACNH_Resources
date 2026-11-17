
void FUN_02dfed48(long param_1,byte *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  byte bVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  undefined *local_90;
  undefined8 *puStack_88;
  undefined *local_80;
  byte abStack_78 [16];
  undefined8 local_68;
  undefined *local_60;
  char *pcStack_58;
  
  bVar7 = *param_2;
  if (7 < bVar7) {
    bVar7 = 0xff;
  }
  *(byte *)(param_1 + 0x1f8) = bVar7;
  puVar4 = PTR_DAT_04bc4e60;
  puVar10 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x210) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar5 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  puVar3 = PTR_DAT_04bc4e58;
  uVar6 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bc4e58);
  puVar2 = PTR_DAT_04bb2020;
  if ((uVar6 & 1) == 0) {
    puVar10 = (undefined8 *)0x0;
  }
  if (*(long *)puVar10[0x43] != 0) {
    local_80 = PTR_DAT_04bb2020 + 0x10;
    abStack_78[0] = 0x55;
    abStack_78[1] = 0x23;
    abStack_78[2] = 10;
    abStack_78[3] = 4;
    abStack_78[4] = 0;
    abStack_78[5] = 0;
    abStack_78[6] = 0;
    abStack_78[7] = 0;
    if (*(uint *)(param_2 + 4) < 0x88) {
      pcStack_58 = (&PTR_DAT_04ace050)[*(uint *)(param_2 + 4)];
    }
    else {
      pcStack_58 = (char *)&DAT_0407ebb1;
    }
    local_60 = local_80;
    FUN_01bea210(param_1 + 0x220,*(long *)puVar10[0x43],&local_80,&local_60);
    pbVar11 = param_2 + 0x10;
    uVar6 = (**(code **)(*(long *)pbVar11 + 8))(pbVar11);
    if ((uVar6 & 1) != 0) {
      (*(code *)**(undefined8 **)pbVar11)(pbVar11,param_1 + 0x5b0);
    }
  }
  puVar10 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x210) + 0x3f8);
  if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar5 != 0)) {
    *(undefined **)puVar3 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  uVar6 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bc4e58);
  if ((uVar6 & 1) == 0) {
    puVar10 = (undefined8 *)0x0;
  }
  lVar9 = puVar10[0x36];
  if (lVar9 == 0) goto LAB_02dfefa0;
  local_90 = puVar2 + 0x10;
  local_68 = 0;
  pcStack_58 = "SYS_Telepathy";
  if (*(uint *)(param_2 + 4) < 0x88) {
    puStack_88 = (undefined8 *)(&PTR_DAT_04ace050)[*(uint *)(param_2 + 4)];
  }
  else {
    puStack_88 = &DAT_0407ebb1;
  }
  local_80 = (undefined *)0x0;
  abStack_78[0] = 0;
  abStack_78[1] = 0;
  abStack_78[2] = 0;
  abStack_78[3] = 0;
  abStack_78[4] = 0;
  abStack_78[5] = 0;
  abStack_78[6] = 0;
  abStack_78[7] = 0;
  abStack_78[8] = 0;
  abStack_78[9] = 0;
  abStack_78[10] = 0;
  abStack_78[0xb] = 0;
  abStack_78[0xc] = 0;
  abStack_78[0xd] = 0;
  local_60 = local_90;
  FUN_01b970f0(&local_80,&local_60);
  FUN_01b9735c(&local_80,&local_60,&local_90);
  iVar5 = 0;
  switch(local_80._0_4_) {
  case 1:
    pbVar11 = abStack_78;
    break;
  case 2:
    pbVar11 = abStack_78 + 6;
    break;
  case 3:
    pbVar11 = abStack_78 + 9;
    break;
  default:
    goto switchD_02dfef0c_caseD_4;
  case 5:
    pbVar11 = abStack_78 + 0xc;
    break;
  case 6:
    pbVar11 = abStack_78 + 0xd;
  }
  bVar7 = 0;
  if (*pbVar11 < 0xb) {
    bVar7 = *pbVar11;
  }
  iVar5 = (uint)(bVar7 == 10) << 1;
  if (bVar7 == 9) {
    iVar5 = 1;
  }
switchD_02dfef0c_caseD_4:
  iVar1 = (uint)(iVar5 == 2) << 1;
  if (iVar5 == 1) {
    iVar1 = 1;
  }
  lVar9 = *(long *)(lVar9 + 0x40);
  if (lVar9 != 0) {
    *(int *)(lVar9 + 0x40) = iVar1;
  }
LAB_02dfefa0:
  lVar9 = *(long *)(param_1 + 0x210);
  if ((6 < *(uint *)(lVar9 + 0x48)) || ((1 << (ulong)(*(uint *)(lVar9 + 0x48) & 0x1f) & 0x58U) == 0)
     ) {
    if (param_2[8] == 0) {
      if (*(int *)(lVar9 + 0x218) == 3) {
        return;
      }
      uVar8 = 3;
    }
    else {
      if (*(int *)(lVar9 + 0x218) == 4) {
        return;
      }
      uVar8 = 4;
    }
    *(undefined4 *)(lVar9 + 0x218) = uVar8;
    *(undefined1 *)(lVar9 + 0x21d) = 1;
  }
  return;
}

