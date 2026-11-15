
void FUN_01f62f38(long param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  bool bVar3;
  short sVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 local_68;
  char *pcStack_60;
  undefined4 local_54;
  
  puVar1 = (undefined4 *)(param_1 + 0x13648);
  switch(param_2) {
  case 1:
switchD_01f62f90_caseD_1:
    lVar8 = *(long *)(param_1 + 8);
    lVar6 = *(long *)(param_1 + 0x10);
    local_68 = (undefined *)((ulong)local_68 & 0xffffffff00000000);
    local_54 = 0;
    uVar7 = *(uint *)(lVar8 + 0x288);
    *(undefined4 *)(lVar8 + 0x288) = *(undefined4 *)(lVar8 + 0x28c);
    uVar7 = uVar7 ^ uVar7 << 0xb;
    *(undefined4 *)(lVar8 + 0x28c) = *(undefined4 *)(lVar8 + 0x290);
    uVar2 = *(uint *)(lVar8 + 0x294);
    *(uint *)(lVar8 + 0x290) = uVar2;
    uVar7 = uVar7 >> 8 ^ uVar2 >> 0x13 ^ uVar7 ^ uVar2;
    *(uint *)(lVar8 + 0x294) = uVar7;
    FUN_01e5a930(0x40000000,lVar6,0xc,PTR_DAT_04bb2150,&local_68,&local_54,PTR_DAT_04bc1600,6);
    *(uint *)(lVar6 + 0x3ac) = uVar7 & 1 ^ 0x3d;
    break;
  case 2:
    uVar11 = *(undefined4 *)(param_1 + 0x13684);
    uVar12 = *(undefined4 *)(param_1 + 0x13688);
    *puVar1 = 0x1e;
    uVar13 = *(undefined4 *)(param_1 + 0x1368c);
    lVar8 = *(long *)PTR_DAT_04bb5c90;
    lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x68);
    fVar10 = *(float *)(lVar6 + 0x278);
    fVar9 = (float)*(int *)(lVar8 + 0x38) * 5.0 + 5.0;
    bVar3 = false;
    if (((float)*(int *)(lVar8 + 0x28) * 5.0 <= fVar10) &&
       (bVar3 = false, !NAN(fVar10) && !NAN(fVar9))) {
      bVar3 = fVar10 < fVar9;
    }
    if ((!bVar3) || (fVar9 = *(float *)(lVar6 + 0x280), fVar9 < (float)*(int *)(lVar8 + 0x2c) * 5.0)
       ) {
      uVar7 = 0;
    }
    else {
      uVar7 = (uint)(fVar9 < (float)*(int *)(lVar8 + 0x3c) * 5.0 + 5.0);
    }
    FUN_02077fb0(*(undefined8 *)(param_1 + 0x89b8));
    uVar5 = 0;
    *(undefined4 *)(param_1 + 0xa9f0) = uVar11;
    *(undefined8 *)(param_1 + 0xaa04) = 0x3f000000;
    *(undefined4 *)(param_1 + 0xa9f4) = uVar12;
    *(undefined4 *)(param_1 + 0xa9f8) = uVar13;
    *(undefined8 *)(param_1 + 0xaa0c) = 0xbf8000003c23d70a;
    *(undefined8 *)(param_1 + 0xaa1c) = 0;
    *(undefined8 *)(param_1 + 0xaa14) = 0xbf800000;
    *(undefined4 *)(param_1 + 0xa9fc) = 0;
    *(uint *)(param_1 + 0xaa00) = uVar7;
    *(undefined1 *)(param_1 + 0xaa44) = 0;
    goto LAB_01f63308;
  case 3:
    local_68 = (undefined *)((ulong)local_68._4_4_ << 0x20);
    *puVar1 = 0x1e;
    local_54 = 0;
    FUN_01e5a930(0x40000000,*(undefined8 *)(param_1 + 0x10),0,PTR_DAT_04bb2150,&local_68,&local_54,
                 PTR_DAT_04bc1600,6);
    goto LAB_01f63194;
  case 4:
    local_68 = PTR_DAT_04bb2020 + 0x10;
    pcStack_60 = "";
    FUN_01e5ab70(*(undefined8 *)(param_1 + 0x10),param_1 + 0x13690,PTR_DAT_04bb65b0,&local_68,6);
LAB_01f63194:
    uVar5 = 0;
    goto LAB_01f63308;
  default:
    local_68 = (undefined *)((ulong)local_68._4_4_ << 0x20);
    *puVar1 = 0x3c;
    local_54 = 0;
    FUN_01e5a930(0x40000000,*(undefined8 *)(param_1 + 0x10),0,PTR_DAT_04bb2150,&local_68,&local_54,
                 PTR_DAT_04bc1600,6);
    goto LAB_01f63154;
  case 6:
    local_68 = PTR_DAT_04bb2020 + 0x10;
    pcStack_60 = "HalloweenReactionEventPlaza";
    sVar4 = FUN_02196ed0(*(long *)(param_1 + 8) + 0x508,&local_68);
    if (sVar4 == 2) {
      local_68 = (undefined *)((ulong)local_68 & 0xffffffff00000000);
      lVar8 = *(long *)(param_1 + 0x10);
      local_54 = 0;
      FUN_01e5a930(0x40000000,lVar8,0xc,PTR_DAT_04bb2150,&local_68,&local_54,PTR_DAT_04bc1600,6);
      *(undefined4 *)(lVar8 + 0x3ac) = 1;
    }
    else if (sVar4 == 1) goto switchD_01f62f90_caseD_1;
    break;
  case 7:
    uVar11 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x508);
    local_68 = PTR_DAT_04bb2020 + 0x10;
    pcStack_60 = "HalloweenReactionEventPlaza";
    local_54 = uVar11;
    FUN_021be8c0(&local_54,&local_68,0);
    local_54._0_2_ = (ushort)(byte)uVar11;
    uVar5 = (ulong)local_68 >> 0x30;
    local_68 = (undefined *)CONCAT26((ushort)uVar5 & 0xff00,0xff0000000000);
    if (-1 < DAT_053d12b0) {
      FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d12b0,&local_68,&local_54,2,0);
    }
    local_68 = (undefined *)((ulong)local_68 & 0xffffffff00000000);
    local_54 = 0;
    FUN_01e5a930(0x40000000,*(undefined8 *)(param_1 + 0x10),0,PTR_DAT_04bb2150,&local_68,&local_54,
                 PTR_DAT_04bc1600,6);
    FUN_02085a50(*(undefined8 *)(param_1 + 0x18),0,0);
LAB_01f63154:
    uVar5 = 0;
    goto LAB_01f63258;
  }
  uVar5 = 0x1000;
LAB_01f63258:
  *(bool *)(param_1 + 0x136a0) = param_2 == 7;
LAB_01f63308:
  *(ulong *)(param_1 + 0xad58) = *(ulong *)(param_1 + 0xad58) & 0xffffffffffffefff | uVar5;
  return;
}

