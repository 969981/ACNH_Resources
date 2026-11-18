
/* WARNING: Removing unreachable block (ram,0x03406024) */

void FUN_03405e7c(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  undefined *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_34;
  
  iVar1 = *param_1;
  if (iVar1 < 1) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)**(undefined8 **)(param_1 + 2);
  }
  uVar2 = 0;
  if (iVar5 != 0) {
    uVar2 = *param_2 / iVar5;
  }
  iVar5 = param_1[8];
  if (((-1 < (int)uVar2) && ((int)uVar2 < iVar5)) &&
     ((*(byte *)(*(long *)(*(long *)(param_1 + 10) + (ulong)uVar2 * 8) + 8) & 1) != 0)) {
    iVar5 = 0;
    if (iVar1 != 0) {
      iVar5 = (int)uVar2 / iVar1;
    }
    plVar6 = *(long **)(*(long *)(*(long *)(param_1 + 2) + (ulong)(uVar2 - iVar5 * iVar1) * 8) +
                       0x10);
    if (plVar6 == (long *)0x0) {
      pfVar3 = (float *)&DAT_0419b56c;
    }
    else {
      local_50 = PTR_DAT_04bc0cb8 + 0x10;
      local_48 = CONCAT44(local_48._4_4_,8);
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_50);
      pfVar3 = (float *)(**(code **)(plVar6[3] + 0xa0))(plVar6[1]);
    }
    fVar7 = *pfVar3 - (float)param_1[0x11];
    fVar8 = -fVar7;
    if (0.0 <= fVar7) {
      fVar8 = fVar7;
    }
    if (fVar8 < (float)param_1[0x10] * 0.3) {
      FUN_03406060(param_1,param_2);
      return;
    }
    iVar5 = param_1[8];
  }
  if ((-1 < (int)uVar2) && ((int)uVar2 < iVar5)) {
    *(ushort *)(param_1 + 0x29) = *(ushort *)(param_1 + 0x29) | 2;
    lVar4 = *(long *)(param_1 + 0x1e);
    if (*(long *)(*(long *)PTR_DAT_04bb2230 + 0xd0) != 0) {
      *(undefined1 *)(*(long *)(*(long *)PTR_DAT_04bb2230 + 0xd0) + 0x26c) = 1;
    }
    if (((lVar4 != 0) &&
        (lVar4 = *(long *)(*(long *)(lVar4 + 0x210) + 0x48), *(int *)(lVar4 + 0x18) != 0)) &&
       ((lVar4 = **(long **)(lVar4 + 0x20), lVar4 != 0 &&
        (local_50 = *(undefined **)(lVar4 + 0x10), local_50 != (undefined *)0x0)))) {
      local_34 = 1;
      *(undefined4 *)(lVar4 + 4) = *(undefined4 *)(local_50 + 0x14a0);
      *(undefined4 *)(lVar4 + 8) = *(undefined4 *)(local_50 + 0x14a4);
      local_40 = 0;
      local_48 = 0;
      (*(code *)**(undefined8 **)(local_50 + 0x40))(local_50 + 0x40,1,&local_50);
      *(undefined8 *)(lVar4 + 0x10) = 0;
    }
    param_1[0x28] = uVar2;
    *(undefined8 *)(param_1 + 0x2e) = *(undefined8 *)param_2;
    *(undefined1 *)(param_1 + 0x2d) = 1;
  }
  return;
}

