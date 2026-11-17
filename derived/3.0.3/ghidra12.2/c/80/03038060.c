
/* WARNING: Removing unreachable block (ram,0x030380e0) */

void FUN_03038060(uint *param_1,uint *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_64;
  
  if ((param_1 != (uint *)0x0) && (param_2 != (uint *)0x0)) {
    uVar4 = param_1[6];
    if (0 < (int)uVar4) {
      uVar11 = 0;
      puVar1 = PTR_DAT_04bc0cb8 + 0x10;
      do {
        plVar10 = *(long **)(param_1 + 4);
        local_70 = 8;
        iVar5 = 0;
        if (param_1[6] != 0) {
          iVar5 = (int)*param_1 / (int)param_1[6];
        }
        local_78 = puVar1;
        (**(code **)(*plVar10 + 0x20))(plVar10,&local_78);
        (**(code **)(plVar10[3] + 0xa0))(plVar10[1]);
        plVar10 = *(long **)(param_2 + 4);
        local_70 = 8;
        local_78 = puVar1;
        (**(code **)(*plVar10 + 0x20))(plVar10,&local_78);
        (**(code **)(plVar10[3] + 0xa0))(plVar10[1]);
        uVar6 = DAT_0418378c;
        uVar7 = (int)uVar11 + (iVar5 + -1) * uVar4;
        if (uVar7 < *param_1) {
          lVar8 = *(long *)(*(long *)(param_1 + 2) + (long)(int)uVar7 * 8);
        }
        else {
          lVar8 = 0;
        }
        if (uVar11 < *param_2) {
          lVar9 = *(long *)(*(long *)(param_2 + 2) + uVar11 * 8);
        }
        else {
          lVar9 = 0;
        }
        local_64 = 1;
        uVar11 = uVar11 + 1;
        *(undefined8 *)(*(long *)(lVar8 + 0x218) + 0x1468) = *(undefined8 *)(lVar9 + 0x218);
        puVar2 = (undefined8 *)(*(long *)(lVar9 + 0x218) + 0x1460);
        puVar3 = puVar2 + uVar6;
        if (7 < uVar6) {
          puVar3 = puVar2;
        }
        *puVar3 = *(undefined8 *)(lVar8 + 0x218);
      } while (uVar4 != uVar11);
    }
  }
  return;
}

