
void FUN_03b05d70(long *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  *(uint *)((long)param_1 + 0xf4) = *(uint *)((long)param_1 + 0xf4) | 1;
  param_1[0x1d] = *(long *)(param_3 + 8);
  FUN_039e9420(param_1,7,*(undefined4 *)(*(long *)(param_3 + 8) + 0x108),param_2);
  *(char **)(param_1[0x1c] + 0x28) = "ParticlePass_PreColorCopy";
  *(undefined1 *)(param_1[10] + 10) = 2;
  *(byte *)((long)param_1 + 0xae) = *(byte *)((long)param_1 + 0xae) | 1;
  *(ushort *)(param_1[10] + 6) = *(ushort *)(param_1[10] + 6) | 2;
  iVar1 = (**(code **)(*param_1 + 0x1e0))(param_1);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      lVar3 = (**(code **)(*param_1 + 0x1e8))(param_1,iVar1);
      if (*(short *)(lVar3 + 0x16) == 0) {
        lVar3 = (**(code **)(*param_1 + 0x1e8))(param_1,iVar1);
        *(undefined1 *)(lVar3 + 0x18) = 2;
      }
      iVar1 = iVar1 + 1;
      iVar2 = (**(code **)(*param_1 + 0x1e0))(param_1);
    } while (iVar1 < iVar2);
  }
  lVar3 = (**(code **)(*param_1 + 0x1e8))(param_1,0);
  *(uint *)(lVar3 + 0x10) = *(uint *)(lVar3 + 0x10) | 0x3c000000;
  lVar3 = (**(code **)(*param_1 + 0x1e8))(param_1,0);
  *(uint *)(lVar3 + 0x10) = *(uint *)(lVar3 + 0x10) | 0x3f0000;
  *(char **)(param_1[0x1c] + (ulong)(1 < *(uint *)(param_1 + 0x1b)) * 0x38 + 0x28) =
       "ParticlePass_PostColorCopy";
  *(undefined1 *)(param_1[10] + 0x16) = 2;
  *(byte *)((long)param_1 + 0xae) = *(byte *)((long)param_1 + 0xae) | 1;
  *(ushort *)(param_1[10] + 0x12) = *(ushort *)(param_1[10] + 0x12) | 2;
  iVar1 = (**(code **)(*param_1 + 0x1e0))(param_1);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      lVar3 = (**(code **)(*param_1 + 0x1e8))(param_1,iVar1);
      if (*(short *)(lVar3 + 0x16) == 1) {
        lVar3 = (**(code **)(*param_1 + 0x1e8))(param_1,iVar1);
        *(undefined1 *)(lVar3 + 0x18) = 2;
      }
      iVar1 = iVar1 + 1;
      iVar2 = (**(code **)(*param_1 + 0x1e0))(param_1);
    } while (iVar1 < iVar2);
  }
  lVar3 = (**(code **)(*param_1 + 0x1e8))(param_1,1);
  *(uint *)(lVar3 + 0x10) = *(uint *)(lVar3 + 0x10) | 0x3c000000;
  lVar3 = (**(code **)(*param_1 + 0x1e8))(param_1,1);
  *(uint *)(lVar3 + 0x10) = *(uint *)(lVar3 + 0x10) & 0xffc0ffff | 0x3e0000;
  *(uint *)(param_1[10] + 0xc) = *(uint *)(param_1[10] + 0xc) | 0x200;
  *(byte *)((long)param_1 + 0xae) = *(byte *)((long)param_1 + 0xae) | 1;
  *(ushort *)(param_1[10] + 0x12) = *(ushort *)(param_1[10] + 0x12) | 2;
  lVar3 = 0x70;
  if (*(uint *)(param_1 + 0x1b) < 3) {
    lVar3 = 0;
  }
  *(char **)(param_1[0x1c] + lVar3 + 0x28) = "ParticlePass_ColorCopyAfter";
  *(undefined1 *)(param_1[10] + 0x22) = 2;
  *(byte *)((long)param_1 + 0xae) = *(byte *)((long)param_1 + 0xae) | 1;
  *(ushort *)(param_1[10] + 0x1e) = *(ushort *)(param_1[10] + 0x1e) | 2;
  iVar1 = (**(code **)(*param_1 + 0x1e0))(param_1);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      lVar3 = (**(code **)(*param_1 + 0x1e8))(param_1,iVar1);
      if (*(short *)(lVar3 + 0x16) == 2) {
        lVar3 = (**(code **)(*param_1 + 0x1e8))(param_1,iVar1);
        *(undefined1 *)(lVar3 + 0x18) = 2;
      }
      iVar1 = iVar1 + 1;
      iVar2 = (**(code **)(*param_1 + 0x1e0))(param_1);
    } while (iVar1 < iVar2);
  }
  lVar3 = (**(code **)(*param_1 + 0x1e8))(param_1,2);
  *(uint *)(lVar3 + 0x10) = *(uint *)(lVar3 + 0x10) | 0x3c000000;
  lVar3 = (**(code **)(*param_1 + 0x1e8))(param_1,2);
  *(uint *)(lVar3 + 0x10) = *(uint *)(lVar3 + 0x10) | 0x3f0000;
  *(uint *)(param_1[10] + 0x18) = *(uint *)(param_1[10] + 0x18) | 0x200;
  *(byte *)((long)param_1 + 0xae) = *(byte *)((long)param_1 + 0xae) | 1;
  *(ushort *)(param_1[10] + 0x1e) = *(ushort *)(param_1[10] + 0x1e) | 2;
  lVar3 = 0xa8;
  if (*(uint *)(param_1 + 0x1b) < 4) {
    lVar3 = 0;
  }
  *(char **)(param_1[0x1c] + lVar3 + 0x28) = "ParticlePass_ReduceBuffer";
  *(undefined1 *)(param_1[10] + 0x2e) = 2;
  *(byte *)((long)param_1 + 0xae) = *(byte *)((long)param_1 + 0xae) | 1;
  *(ushort *)(param_1[10] + 0x2a) = *(ushort *)(param_1[10] + 0x2a) | 2;
  iVar1 = (**(code **)(*param_1 + 0x1e0))(param_1);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      lVar3 = (**(code **)(*param_1 + 0x1e8))(param_1,iVar1);
      if (*(short *)(lVar3 + 0x16) == 3) {
        lVar3 = (**(code **)(*param_1 + 0x1e8))(param_1,iVar1);
        *(undefined1 *)(lVar3 + 0x18) = 2;
      }
      iVar1 = iVar1 + 1;
      iVar2 = (**(code **)(*param_1 + 0x1e0))(param_1);
    } while (iVar1 < iVar2);
  }
  lVar3 = (**(code **)(*param_1 + 0x1e8))(param_1,3);
  *(uint *)(lVar3 + 0x10) = *(uint *)(lVar3 + 0x10) | 0x3c000000;
  lVar3 = (**(code **)(*param_1 + 0x1e8))(param_1,3);
  *(uint *)(lVar3 + 0x10) = *(uint *)(lVar3 + 0x10) | 0x3f0000;
  *(uint *)(param_1[10] + 0x24) = *(uint *)(param_1[10] + 0x24) | 0x800;
  *(byte *)((long)param_1 + 0xae) = *(byte *)((long)param_1 + 0xae) | 1;
  *(ushort *)(param_1[10] + 0x2a) = *(ushort *)(param_1[10] + 0x2a) | 2;
  lVar3 = 0xe0;
  if (*(uint *)(param_1 + 0x1b) < 5) {
    lVar3 = 0;
  }
  *(char **)(param_1[0x1c] + lVar3 + 0x28) = "ParticlePass_Opa";
  *(undefined1 *)(param_1[10] + 0x3a) = 1;
  *(byte *)((long)param_1 + 0xae) = *(byte *)((long)param_1 + 0xae) | 1;
  *(ushort *)(param_1[10] + 0x36) = *(ushort *)(param_1[10] + 0x36) | 2;
  iVar1 = (**(code **)(*param_1 + 0x1e0))(param_1);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      lVar3 = (**(code **)(*param_1 + 0x1e8))(param_1,iVar1);
      if (*(short *)(lVar3 + 0x16) == 4) {
        lVar3 = (**(code **)(*param_1 + 0x1e8))(param_1,iVar1);
        *(undefined1 *)(lVar3 + 0x18) = 1;
      }
      iVar1 = iVar1 + 1;
      iVar2 = (**(code **)(*param_1 + 0x1e0))(param_1);
    } while (iVar1 < iVar2);
  }
  lVar3 = (**(code **)(*param_1 + 0x1e8))(param_1,4);
  *(uint *)(lVar3 + 0x10) = *(uint *)(lVar3 + 0x10) | 0x3c000000;
  lVar3 = (**(code **)(*param_1 + 0x1e8))(param_1,4);
  *(uint *)(lVar3 + 0x10) = *(uint *)(lVar3 + 0x10) | 0x3f0000;
  lVar3 = 0x118;
  if (*(uint *)(param_1 + 0x1b) < 6) {
    lVar3 = 0;
  }
  *(char **)(param_1[0x1c] + lVar3 + 0x28) = "ParticlePass_DepthShadow";
  *(undefined1 *)(param_1[10] + 0x46) = 1;
  *(byte *)((long)param_1 + 0xae) = *(byte *)((long)param_1 + 0xae) | 1;
  *(ushort *)(param_1[10] + 0x42) = *(ushort *)(param_1[10] + 0x42) | 2;
  iVar1 = (**(code **)(*param_1 + 0x1e0))(param_1);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      lVar3 = (**(code **)(*param_1 + 0x1e8))(param_1,iVar1);
      if (*(short *)(lVar3 + 0x16) == 5) {
        lVar3 = (**(code **)(*param_1 + 0x1e8))(param_1,iVar1);
        *(undefined1 *)(lVar3 + 0x18) = 1;
      }
      iVar1 = iVar1 + 1;
      iVar2 = (**(code **)(*param_1 + 0x1e0))(param_1);
    } while (iVar1 < iVar2);
  }
  lVar3 = (**(code **)(*param_1 + 0x1e8))(param_1,5);
  *(uint *)(lVar3 + 0x10) = *(uint *)(lVar3 + 0x10) | 0x3c000000;
  lVar3 = (**(code **)(*param_1 + 0x1e8))(param_1,5);
  *(uint *)(lVar3 + 0x10) = *(uint *)(lVar3 + 0x10) | 0x3f0000;
  if (0 < (int)param_1[0x1e]) {
    iVar1 = 0;
    do {
      FUN_03ad50f0(param_1,5,1,1,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)param_1[0x1e]);
  }
  lVar3 = 0x150;
  if (*(uint *)(param_1 + 0x1b) < 7) {
    lVar3 = 0;
  }
  *(char **)(param_1[0x1c] + lVar3 + 0x28) = "ParticlePass_AfterToneMapping";
  *(undefined1 *)(param_1[10] + 0x52) = 2;
  *(byte *)((long)param_1 + 0xae) = *(byte *)((long)param_1 + 0xae) | 1;
  *(ushort *)(param_1[10] + 0x4e) = *(ushort *)(param_1[10] + 0x4e) | 2;
  iVar1 = (**(code **)(*param_1 + 0x1e0))(param_1);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      lVar3 = (**(code **)(*param_1 + 0x1e8))(param_1,iVar1);
      if (*(short *)(lVar3 + 0x16) == 6) {
        lVar3 = (**(code **)(*param_1 + 0x1e8))(param_1,iVar1);
        *(undefined1 *)(lVar3 + 0x18) = 2;
      }
      iVar1 = iVar1 + 1;
      iVar2 = (**(code **)(*param_1 + 0x1e0))(param_1);
    } while (iVar1 < iVar2);
  }
  lVar3 = (**(code **)(*param_1 + 0x1e8))(param_1,6);
  *(uint *)(lVar3 + 0x10) = *(uint *)(lVar3 + 0x10) | 0x3c000000;
  lVar3 = (**(code **)(*param_1 + 0x1e8))(param_1,6);
  *(uint *)(lVar3 + 0x10) = *(uint *)(lVar3 + 0x10) | 0x3f0000;
  *(uint *)(param_1[10] + 0x48) = *(uint *)(param_1[10] + 0x48) | 0x800000;
  *(byte *)((long)param_1 + 0xae) = *(byte *)((long)param_1 + 0xae) | 1;
  *(ushort *)(param_1[10] + 0x4e) = *(ushort *)(param_1[10] + 0x4e) | 2;
  return;
}

