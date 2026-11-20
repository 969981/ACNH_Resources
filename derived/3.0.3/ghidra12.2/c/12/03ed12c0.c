
undefined1 FUN_03ed12c0(float param_1,undefined8 *param_2,float *param_3,long param_4,long param_5)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  undefined1 uVar10;
  long lVar11;
  float fVar12;
  undefined1 local_58 [8];
  undefined8 local_50;
  byte local_48;
  
  lVar9 = param_2[2];
  iVar4 = *(int *)(*(long *)(lVar9 + 8) + 0x10);
  uVar8 = (uint)*(ushort *)((long)param_2 + 10);
  if (*(int *)(lVar9 + 0x38) + -1 <= iVar4 || iVar4 + 1U != uVar8) {
    uVar7 = (ulong)*(byte *)(*(long *)(lVar9 + 0x18) + (ulong)uVar8 * 0x24 + 2);
    if (uVar7 != 0) {
      iVar4 = *(int *)(*(long *)(lVar9 + 0x18) + (ulong)uVar8 * 0x24 + 0x10);
      do {
        iVar1 = *(int *)(*(long *)(lVar9 + 0x48) + (long)iVar4 * 4);
        if (*(short *)(*(long *)(lVar9 + 0x50) + (long)iVar1 * 0x18) == 0) {
          lVar9 = *(long *)(lVar9 + 8) +
                  (long)*(int *)(*(long *)(lVar9 + 0x50) + (long)iVar1 * 0x18 + 4);
          fVar12 = (float)FUN_03ebf3f0(*(undefined8 *)(param_4 + 8),lVar9 + 4,
                                       *(undefined8 *)(param_5 + 0x70),1,0,0);
          *param_3 = fVar12;
          if ((int)*(uint *)(lVar9 + 8) < 0) {
            lVar11 = *(long *)(param_4 + 8);
            plVar6 = *(long **)(lVar11 + 0x18);
            uVar2 = (**(code **)(*plVar6 + 0x118))
                              (plVar6,*(undefined8 *)(*(long *)(param_5 + 0x70) + 0x10),
                               *(uint *)(lVar9 + 8) & 0xffff);
            plVar6 = *(long **)(lVar11 + 0x20);
            fVar3 = (float)(**(code **)(*plVar6 + 0x128))(plVar6,uVar2);
            fVar12 = *param_3;
          }
          else {
            fVar3 = *(float *)(lVar9 + 0xc);
          }
          param_3[1] = fVar3;
          if (fVar12 < 0.0) {
            *param_3 = param_1;
          }
          uVar10 = 1;
          if (*(long *)(*(long *)(param_4 + 8) + 0x120) == 0) {
            return 1;
          }
          goto LAB_03ed1360;
        }
        iVar4 = iVar4 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  uVar10 = 0;
LAB_03ed1360:
  if (*(long *)(*(long *)(param_4 + 8) + 0x120) != 0) {
    if (((*PTR_DAT_04bd48c8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bd48c8), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bd48c0 = PTR_DAT_04bd47d0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bd48c8);
    }
    uVar7 = (**(code **)*param_2)(param_2,PTR_DAT_04bd48c0);
    if ((uVar7 & 1) != 0) {
      local_58[0] = uVar10;
      local_50 = FUN_03edc8c0(param_2,param_4,param_5);
      local_48 = *(byte *)(param_5 + 0x7a) >> 3 & 1;
      puVar5 = *(undefined8 **)(*(long *)(param_4 + 8) + 0x120);
      uVar7 = (**(code **)*puVar5)(puVar5,local_58,param_3);
      if ((uVar7 & 1) != 0) {
        uVar10 = 1;
      }
    }
  }
  return uVar10;
}

