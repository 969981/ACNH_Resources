
void FUN_030e6394(long param_1,uint param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  
  plVar1 = (long *)(param_1 + 0x18) + (ulong)param_2 * 4;
  if (4 < param_2) {
    plVar1 = (long *)(param_1 + 0x18);
  }
  if (*(long *)(param_1 + 0xc0) != 0) {
    uVar5 = (**(code **)(*plVar1 + 8))(plVar1);
    puVar3 = PTR_DAT_04bb2698;
    if ((uVar5 & 1) != 0) {
      plVar2 = *(long **)(param_1 + 0xc0) + (ulong)param_2 * 3;
      if (4 < param_2) {
        plVar2 = *(long **)(param_1 + 0xc0);
      }
      if ((int)plVar2[2] == 0) {
        lVar10 = *(long *)PTR_DAT_04bb2698;
        if (lVar10 == 0) {
          puVar7 = malloc(0x30);
        }
        else {
          lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar8 = (long *)(lVar10 + 8);
          if (lVar6 != 0) {
            plVar8 = (long *)(lVar6 + 0xa8);
          }
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) {
            puVar7 = (undefined8 *)0x0;
          }
          else {
            puVar7 = (undefined8 *)(**(code **)(*plVar8 + 0x30))(plVar8,0x30,8);
          }
        }
        puVar7[5] = 0;
        puVar4 = PTR_DAT_04bc77b8;
        puVar7[3] = 0;
        puVar7[4] = 0;
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = puVar4 + 0x10;
        (**(code **)(*plVar1 + 0x10))(plVar1);
        plVar8 = (long *)((long)*(int *)((long)plVar2 + 0x14) + (long)puVar7);
        lVar10 = *plVar2;
        *plVar2 = (long)plVar8;
        *plVar8 = lVar10;
        plVar8[1] = (long)plVar2;
        if (lVar10 != 0) {
          *(long **)(lVar10 + 8) = plVar8;
        }
        *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
        *plVar1 = (long)&PTR_LAB_04aff448;
        plVar1[1] = (long)plVar2;
        lVar10 = *(long *)puVar3;
      }
      else {
        lVar10 = *(long *)PTR_DAT_04bb2698;
      }
      if (lVar10 == 0) {
        puVar7 = malloc(0x30);
      }
      else {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        puVar7 = (undefined8 *)(lVar10 + 8);
        if (lVar6 != 0) {
          puVar7 = (undefined8 *)(lVar6 + 0xa8);
        }
        puVar7 = (undefined8 *)(**(code **)(*(long *)*puVar7 + 0x30))((long *)*puVar7,0x30,8);
      }
      *puVar7 = 0;
      puVar7[1] = 0;
      lVar9 = *param_3;
      lVar10 = *param_4;
      lVar6 = param_4[1];
      puVar7[2] = &PTR_LAB_04aff420;
      puVar7[3] = lVar9;
      puVar7[4] = lVar10;
      puVar7[5] = lVar6;
      lVar10 = *plVar2;
      plVar1 = (long *)((long)*(int *)((long)plVar2 + 0x14) + (long)puVar7);
      *plVar2 = (long)plVar1;
      *plVar1 = lVar10;
      plVar1[1] = (long)plVar2;
      if (lVar10 != 0) {
        *(long **)(lVar10 + 8) = plVar1;
      }
      *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
      return;
    }
  }
  lVar9 = *param_3;
  lVar10 = *param_4;
  lVar6 = param_4[1];
  *plVar1 = (long)&PTR_LAB_04aff420;
  plVar1[1] = lVar9;
  plVar1[2] = lVar10;
  plVar1[3] = lVar6;
  return;
}

