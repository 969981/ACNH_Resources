
void FUN_03a0c3c0(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  *(undefined4 *)(param_1 + 0x7c) = 5;
  uVar2 = *(uint *)(param_1 + 0x98);
  if (0 < (int)uVar2) {
    uVar3 = 0;
    do {
      uVar1 = uVar3 + 1;
      if (uVar2 <= uVar3) {
        uVar3 = 0;
      }
      *(undefined4 *)(*(long *)(param_1 + 0xa0) + (long)(int)uVar3 * 4) = 0;
      uVar2 = *(uint *)(param_1 + 0x98);
      uVar3 = uVar1;
    } while ((int)uVar1 < (int)uVar2);
  }
  *(undefined8 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(short *)(param_1 + 0x144) != 0) {
    if (param_2 == 0) {
      uVar2 = 0;
      do {
        lVar4 = *(long *)(param_1 + 0x128);
        uVar3 = uVar2;
        if (*(uint *)(param_1 + 0x120) <= uVar2) {
          uVar3 = 0;
        }
        lVar5 = lVar4 + (ulong)uVar3 * 0x3d8;
        *(uint *)(lVar5 + 0x1f0) = (uint)*(byte *)(param_1 + 0x14c);
        *(uint *)(lVar5 + 0x230) = (uint)*(byte *)(param_1 + 0x14d);
        *(uint *)(lVar5 + 0x270) = (uint)*(byte *)(param_1 + 0x14e);
        *(uint *)(lVar5 + 0x2b0) = (uint)*(byte *)(param_1 + 0x14f);
        *(uint *)(lVar5 + 0x2f0) = (uint)*(byte *)(param_1 + 0x150);
        FUN_03b0c610(lVar5 + 0x318);
        if (0 < *(int *)(lVar5 + 0x214)) {
          (**(code **)(*(long *)(lVar5 + 0x1d8) + 0x10))((long *)(lVar5 + 0x1d8));
        }
        if (0 < *(int *)(lVar5 + 0x254)) {
          (**(code **)(*(long *)(lVar5 + 0x218) + 0x10))();
        }
        if (0 < *(int *)(lVar5 + 0x294)) {
          (**(code **)(*(long *)(lVar5 + 600) + 0x10))();
        }
        if (0 < *(int *)(lVar5 + 0x2d4)) {
          (**(code **)(*(long *)(lVar5 + 0x298) + 0x10))();
        }
        if (0 < *(int *)(lVar5 + 0x314)) {
          (**(code **)(*(long *)(lVar5 + 0x2d8) + 0x10))(lVar5 + 0x2d8);
        }
        lVar4 = lVar4 + (ulong)uVar3 * 0x3d8;
        if (0 < *(int *)(lVar4 + 0x35c)) {
          (**(code **)(*(long *)(lVar4 + 800) + 0x10))((long *)(lVar4 + 800));
        }
        if (0 < *(int *)(lVar4 + 0x39c)) {
          (**(code **)(*(long *)(lVar4 + 0x360) + 0x10))((long *)(lVar4 + 0x360));
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(ushort *)(param_1 + 0x144));
    }
    else {
      uVar2 = 0;
      do {
        lVar4 = *(long *)(param_1 + 0x128);
        uVar3 = uVar2;
        if (*(uint *)(param_1 + 0x120) <= uVar2) {
          uVar3 = 0;
        }
        lVar5 = lVar4 + (ulong)uVar3 * 0x3d8;
        *(uint *)(lVar5 + 0x1f0) = (uint)*(byte *)(param_1 + 0x14c);
        *(uint *)(lVar5 + 0x230) = (uint)*(byte *)(param_1 + 0x14d);
        *(uint *)(lVar5 + 0x270) = (uint)*(byte *)(param_1 + 0x14e);
        *(uint *)(lVar5 + 0x2b0) = (uint)*(byte *)(param_1 + 0x14f);
        *(uint *)(lVar5 + 0x2f0) = (uint)*(byte *)(param_1 + 0x150);
        FUN_03b0c610(lVar5 + 0x318);
        if (0 < *(int *)(lVar5 + 0x214)) {
          *(undefined4 *)(param_1 + 0x7c) = 3;
          uVar1 = *(uint *)(param_1 + 200);
          if (uVar1 < *(uint *)(param_1 + 0xb8)) {
            *(uint *)(param_1 + 200) = uVar1 + 1;
            *(long *)(*(long *)(param_1 + 0xc0) + (long)(int)uVar1 * 8) = lVar5 + 0x1d8;
          }
        }
        if (0 < *(int *)(lVar5 + 0x254)) {
          *(undefined4 *)(param_1 + 0x7c) = 3;
          uVar1 = *(uint *)(param_1 + 200);
          if (uVar1 < *(uint *)(param_1 + 0xb8)) {
            *(uint *)(param_1 + 200) = uVar1 + 1;
            *(long *)(*(long *)(param_1 + 0xc0) + (long)(int)uVar1 * 8) = lVar5 + 0x218;
          }
        }
        if (0 < *(int *)(lVar5 + 0x294)) {
          *(undefined4 *)(param_1 + 0x7c) = 3;
          uVar1 = *(uint *)(param_1 + 200);
          if (uVar1 < *(uint *)(param_1 + 0xb8)) {
            *(uint *)(param_1 + 200) = uVar1 + 1;
            *(long *)(*(long *)(param_1 + 0xc0) + (long)(int)uVar1 * 8) = lVar5 + 600;
          }
        }
        if (0 < *(int *)(lVar5 + 0x2d4)) {
          *(undefined4 *)(param_1 + 0x7c) = 3;
          uVar1 = *(uint *)(param_1 + 200);
          if (uVar1 < *(uint *)(param_1 + 0xb8)) {
            *(uint *)(param_1 + 200) = uVar1 + 1;
            *(long *)(*(long *)(param_1 + 0xc0) + (long)(int)uVar1 * 8) = lVar5 + 0x298;
          }
        }
        if (0 < *(int *)(lVar5 + 0x314)) {
          *(undefined4 *)(param_1 + 0x7c) = 3;
          uVar1 = *(uint *)(param_1 + 200);
          if (uVar1 < *(uint *)(param_1 + 0xb8)) {
            *(uint *)(param_1 + 200) = uVar1 + 1;
            *(long *)(*(long *)(param_1 + 0xc0) + (long)(int)uVar1 * 8) = lVar5 + 0x2d8;
          }
        }
        lVar4 = lVar4 + (ulong)uVar3 * 0x3d8;
        if (0 < *(int *)(lVar4 + 0x35c)) {
          *(undefined4 *)(param_1 + 0x7c) = 3;
          uVar3 = *(uint *)(param_1 + 200);
          if (uVar3 < *(uint *)(param_1 + 0xb8)) {
            *(uint *)(param_1 + 200) = uVar3 + 1;
            *(long *)(*(long *)(param_1 + 0xc0) + (long)(int)uVar3 * 8) = lVar4 + 800;
          }
        }
        if (0 < *(int *)(lVar4 + 0x39c)) {
          *(undefined4 *)(param_1 + 0x7c) = 3;
          uVar3 = *(uint *)(param_1 + 200);
          if (uVar3 < *(uint *)(param_1 + 0xb8)) {
            *(uint *)(param_1 + 200) = uVar3 + 1;
            *(long *)(*(long *)(param_1 + 0xc0) + (long)(int)uVar3 * 8) = lVar4 + 0x360;
          }
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(ushort *)(param_1 + 0x144));
    }
  }
  if (param_2 == 0) {
    return;
  }
  FUN_03a0cd90(param_2,"ModelJobQueue::preSort",param_1 + 8,*(undefined4 *)PTR_DAT_04bd0f30,0,0);
  return;
}

