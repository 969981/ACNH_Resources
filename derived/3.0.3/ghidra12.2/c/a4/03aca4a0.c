
void FUN_03aca4a0(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint local_78 [2];
  long local_70;
  long lStack_68;
  
  puVar2 = PTR_DAT_04bc1010;
  uVar8 = *(uint *)(param_1 + 0x370);
  uVar1 = *(uint *)(param_1 + 0x238);
  local_78[0] = 0;
  local_70 = param_1;
  lStack_68 = param_2;
  if (0 < (int)uVar8) {
    if ((int)uVar1 < 2) {
      uVar1 = 1;
    }
    uVar10 = 0;
    if ((int)uVar8 <= (int)uVar1) {
      uVar1 = uVar8;
    }
    do {
      uVar8 = uVar10;
      if (*(uint *)(param_1 + 0x370) <= uVar10) {
        uVar8 = 0;
      }
      lVar5 = *(long *)(param_1 + 0x378) + (ulong)uVar8 * 0x5d0;
      FUN_03a10000(param_1 + 0x380,param_2,uVar10,lVar5 + 0x5c0,lVar5 + 0x5c8,1);
      puVar3 = *(undefined8 **)(param_1 + 0xf98);
      local_78[0] = uVar10;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,local_78);
      }
      if (*(int *)(param_1 + 0x950) == -1) {
        lVar5 = *(long *)puVar2;
        if ((*(uint *)(lVar5 + 0x5c8) >> 3 & 1) == 0) {
          uVar8 = 0;
          if (~(uint)*(ushort *)(lVar5 + 0x3da) < *(uint *)(lVar5 + 0x368)) {
            uVar8 = ~(uint)*(ushort *)(lVar5 + 0x3da);
          }
          if ((*(uint *)(*(long *)(lVar5 + 0x370) + (long)(int)uVar8 * 0x20 + 4) >> 2 & 1) != 0)
          goto LAB_03aca5c0;
          uVar6 = *(ulong *)(param_2 + 0x100) | 0x8000000000000000;
        }
        else {
LAB_03aca5c0:
          if ((*(uint *)(lVar5 + 0x5c8) >> 5 & 1) == 0) {
            uVar7 = 0x112;
            uVar9 = 0x12;
          }
          else {
            uVar7 = 0x111;
            uVar9 = 0x11;
          }
          if ((*(uint *)(lVar5 + 800) & 2) != 0) {
            uVar9 = uVar7;
          }
          (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar9);
          uVar6 = 0;
        }
        *(ulong *)(param_2 + 0x100) = uVar6;
      }
      if ((*(ushort *)(param_1 + 0x59a) < 10) &&
         ((1 << (ulong)(*(ushort *)(param_1 + 0x59a) & 0x1f) & 0x350U) != 0)) {
        uVar4 = (uint)*(ushort *)(param_1 + 0x594);
        uVar8 = uVar4;
      }
      else {
        uVar4 = (uint)*(ushort *)(param_1 + 0x594);
        uVar8 = 1;
      }
      if (uVar8 <= uVar4) {
        uVar8 = uVar4;
      }
      if (uVar10 == uVar8 - 1) {
        *(long *)(param_1 + 0x550) = param_1 + 0x560;
      }
      uVar10 = uVar10 + 1;
    } while (uVar1 != uVar10);
  }
  if (*(int *)(param_1 + 0x3c8) == 1) {
    FUN_03a11120(param_1 + 0x380,param_2);
  }
  return;
}

