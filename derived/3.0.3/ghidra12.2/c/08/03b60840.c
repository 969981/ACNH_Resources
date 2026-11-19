
void FUN_03b60840(float param_1,long param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  uint local_48;
  float local_44;
  
  if ((((*(char *)(param_2 + 8) != '\0') && (*(long *)(param_2 + 0xd8) != 0)) &&
      ((int)param_3 < (int)*(uint *)(DAT_05aebb88 + 0x208))) &&
     (param_3 < *(uint *)(DAT_05aebb88 + 0x208))) {
    uVar2 = param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU);
    lVar6 = DAT_05aebb88 + 0x1f8;
    uVar4 = uVar2 + 1;
    uVar1 = uVar4 & 3;
    if (2 < uVar2) {
      uVar4 = uVar4 & 0xfffffffc;
      do {
        uVar4 = uVar4 - 4;
        lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(lVar6 + 8) + 8) + 8) + 8);
      } while (uVar4 != 0);
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      lVar6 = *(long *)(lVar6 + 8);
    }
    if (((lVar6 != 0) &&
        (plVar7 = (long *)(lVar6 - *(int *)(DAT_05aebb88 + 0x20c)), plVar7 != (long *)0x0)) &&
       (local_48 = param_3, uVar5 = (**(code **)(*plVar7 + 0x58))(plVar7), (uVar5 & 1) != 0)) {
      lVar6 = *(long *)(param_2 + 0xd8);
      uVar4 = (**(code **)(*plVar7 + 0x48))(plVar7);
      if ((0.0 < param_1) &&
         ((1 << (ulong)(uVar4 & 0x1f) & *(uint *)(lVar6 + (ulong)(uVar4 >> 5 & 0x7ff) * 4 + 0x10))
          == 0)) {
        plVar8 = *(long **)(param_2 + 0xd8);
        uVar4 = (**(code **)(*plVar7 + 0x48))(plVar7);
        if ((*(uint *)((long)plVar8 + (ulong)(uVar4 >> 5 & 0x7ff) * 4 + 0x10) >>
             (ulong)(uVar4 & 0x1f) & 1) == 0) {
          uVar4 = (**(code **)(*plVar7 + 0x48))(plVar7);
          lVar6 = (ulong)(uVar4 >> 5 & 0x7ff) * 4;
          *(uint *)((long)plVar8 + lVar6 + 0x10) =
               1 << (ulong)(uVar4 & 0x1f) | *(uint *)((long)plVar8 + lVar6 + 0x10);
          (**(code **)(*plVar8 + 0x30))(plVar8,plVar8 + 1);
          uVar3 = (**(code **)(*plVar7 + 0x48))(plVar7);
          local_48 = CONCAT22(local_48._2_2_,uVar3);
          local_44 = 0.0;
          FUN_03b56150(plVar8 + 5,&local_48,0);
        }
      }
      lVar6 = *(long *)(param_2 + 0xd8);
      uVar4 = (**(code **)(*plVar7 + 0x48))(plVar7);
      if ((*(uint *)(lVar6 + (ulong)(uVar4 >> 5 & 0x7ff) * 4 + 0x10) >> (ulong)(uVar4 & 0x1f) & 1)
          != 0) {
        lVar6 = *(long *)(param_2 + 0xd8);
        fVar9 = 128.0;
        if (param_1 <= 128.0) {
          fVar9 = param_1;
        }
        fVar10 = -128.0;
        if (-128.0 <= param_1) {
          fVar10 = fVar9;
        }
        uVar3 = (**(code **)(*plVar7 + 0x48))(plVar7);
        local_48 = CONCAT22(local_48._2_2_,uVar3);
        local_44 = fVar10;
        FUN_03b56150(lVar6 + 0x28,&local_48,0);
      }
    }
  }
  return;
}

