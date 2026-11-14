
void FUN_01776c64(long param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  undefined8 local_20;
  undefined8 local_18;
  
  lVar6 = DAT_05292338;
  if (*(int *)(param_1 + 0x638) == 3) {
    lVar4 = *(long *)(param_1 + 0x60);
    lVar3 = *(long *)(lVar4 + 0x1150);
    if (lVar3 != 0) {
      local_20 = 0;
      local_18 = &DAT_3f8000003f800000;
      if (*(int *)(param_1 + 0xaf8) == 6) {
        if (DAT_05292338 == 0) {
          uVar5 = 4;
          fVar8 = 4.0;
          *(undefined4 *)(param_1 + 0xafc) = 4;
        }
        else {
          uVar5 = *(int *)(DAT_05292338 + 0xf64) * 2 + 4;
          fVar8 = (float)uVar5;
          *(uint *)(param_1 + 0xafc) = uVar5;
          uVar5 = *(int *)(lVar6 + 0xf68) * 2 + 4;
        }
        *(uint *)(param_1 + 0xb00) = uVar5;
        local_18 = (undefined1 *)CONCAT44(8.0 / (float)uVar5,8.0 / fVar8);
        local_20 = CONCAT44((1.0 - 1.0 / (8.0 / (float)uVar5)) * 0.5,
                            (1.0 - 1.0 / (8.0 / fVar8)) * 0.5);
      }
      lVar6 = *(long *)(lVar4 + 0x1180);
      bVar1 = *(long *)(lVar4 + 0x1160) != 0;
      if (lVar6 != 0 && bVar1) {
        uVar7 = *(ulong *)(lVar6 + (ulong)(1 < *(uint *)(lVar4 + 0x1178)) * 8);
      }
      else {
        uVar7 = 0xffffffffffff;
      }
      if (((((~(uint)uVar7 & 0xffff) != 0) && ((uVar7 & 0xffff0000) != 0xffff0000)) &&
          (*(int *)(param_1 + 0xaf8) == 6)) && ((uVar7 & 0xffff00000000) != 0xffff00000000)) {
        if (lVar6 != 0 && bVar1) {
          uVar7 = *(ulong *)(lVar6 + (ulong)(1 < *(uint *)(lVar4 + 0x1178)) * 8);
        }
        else {
          uVar7 = 0xffffffffffff;
        }
        plVar2 = (long *)**(undefined8 **)
                           (*(long *)(lVar3 + 0x38) +
                           (-(uVar7 >> 0xf & 1) & 0xfffffffffff80000 | (uVar7 & 0xffff) << 3));
        (**(code **)(*plVar2 + 0x178))
                  (0,plVar2,(int)uVar7 >> 0x10,(int)(uVar7 >> 0x10) >> 0x10,&local_18,&local_20);
      }
    }
  }
  return;
}

