
void FUN_01f681f8(long param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  float fVar7;
  undefined8 local_38;
  char *pcStack_30;
  undefined4 local_24;
  
  local_38 = PTR_DAT_04bb2020 + 0x10;
  pcStack_30 = "HarvestDemoPlayerProgress";
  iVar4 = FUN_02743000(&local_38);
  lVar6 = *(long *)(param_1 + 8);
  uVar2 = *(uint *)(lVar6 + 0x288);
  *(undefined4 *)(lVar6 + 0x288) = *(undefined4 *)(lVar6 + 0x28c);
  uVar2 = uVar2 ^ uVar2 << 0xb;
  *(undefined4 *)(lVar6 + 0x28c) = *(undefined4 *)(lVar6 + 0x290);
  uVar3 = *(uint *)(lVar6 + 0x294);
  *(uint *)(lVar6 + 0x290) = uVar3;
  uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
  *(uint *)(lVar6 + 0x294) = uVar2;
  piVar1 = (int *)(param_1 + 0x136a4);
  if (*piVar1 != 0) {
    switch(*piVar1) {
    case 2:
switchD_01f68298_caseD_2:
      local_38 = (undefined *)((ulong)local_38._4_4_ << 0x20);
      lVar6 = *(long *)(param_1 + 0x10);
      local_24 = 0;
      FUN_01e5a930(0x40000000,lVar6,0xc,PTR_DAT_04bb2150,&local_38,&local_24,PTR_DAT_04bc1600,6);
      iVar4 = 2;
      uVar5 = 3;
      goto LAB_01f683ec;
    case 3:
      goto switchD_01f68298_caseD_3;
    default:
      break;
    case 5:
      goto switchD_01f68298_caseD_5;
    case 0xb:
switchD_01f68298_caseD_b:
      local_38 = (undefined *)((ulong)local_38._4_4_ << 0x20);
      lVar6 = *(long *)(param_1 + 0x10);
      local_24 = 0;
      FUN_01e5a930(0x40000000,lVar6,0xc,PTR_DAT_04bb2150,&local_38,&local_24,PTR_DAT_04bc1600,6);
      iVar4 = 0xb;
      uVar5 = 0x1d;
      goto LAB_01f683ec;
    }
  }
  if (iVar4 == 4) {
switchD_01f68298_caseD_5:
    local_38 = (undefined *)((ulong)local_38._4_4_ << 0x20);
    lVar6 = *(long *)(param_1 + 0x10);
    local_24 = 0;
    FUN_01e5a930(0x40000000,lVar6,0xc,PTR_DAT_04bb2150,&local_38,&local_24,PTR_DAT_04bc1600,6);
    iVar4 = 5;
    uVar5 = 0x44;
  }
  else {
    fVar7 = (float)(uVar2 >> 9 | 0x3f800000) + -1.0;
    if (iVar4 == 3) {
      if (0.25 < fVar7) goto switchD_01f68298_caseD_2;
    }
    else if ((iVar4 != 2) || (fVar7 <= 0.25)) goto switchD_01f68298_caseD_b;
switchD_01f68298_caseD_3:
    local_38 = (undefined *)((ulong)local_38._4_4_ << 0x20);
    lVar6 = *(long *)(param_1 + 0x10);
    local_24 = 0;
    FUN_01e5a930(0x40000000,lVar6,0xc,PTR_DAT_04bb2150,&local_38,&local_24,PTR_DAT_04bc1600,6);
    iVar4 = 3;
    uVar5 = 5;
  }
LAB_01f683ec:
  *(undefined4 *)(lVar6 + 0x3ac) = uVar5;
  *piVar1 = iVar4;
  return;
}

