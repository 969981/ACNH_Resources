
void FUN_03d5ae9c(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  uVar5 = (**(code **)(**(long **)PTR_DAT_04bb26b8 + 0x18))();
  puVar3 = PTR_DAT_04bb2698;
  uVar4 = (uint)uVar5;
  uVar1 = ((uint)(uVar5 >> 1) & 0x55555555) + (uVar4 & 0x55555555);
  uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
  uVar1 = (uVar1 >> 4 & 0x7070707) + (uVar1 & 0x7070707);
  uVar1 = (uVar1 >> 8 & 0xf000f) + (uVar1 & 0xf000f);
  if ((uVar1 & 0x1f) + (uVar1 >> 0x10) != 0) {
    if ((uVar5 & 1) != 0) {
      lVar8 = *(long *)PTR_DAT_04bb2698;
      if (lVar8 == 0) {
        plVar7 = malloc(0x170);
      }
      else {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        puVar2 = (undefined8 *)(lVar8 + 8);
        if (lVar6 != 0) {
          puVar2 = (undefined8 *)(lVar6 + 0xa8);
        }
        plVar7 = (long *)(**(code **)(*(long *)*puVar2 + 0x30))((long *)*puVar2,0x170,8);
      }
      FUN_03d5b830(plVar7,param_1,0);
      (**(code **)(*plVar7 + 0x30))(plVar7);
      *param_1 = plVar7;
    }
    if ((uVar4 >> 1 & 1) != 0) {
      lVar8 = *(long *)puVar3;
      if (lVar8 == 0) {
        plVar7 = malloc(0x170);
      }
      else {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        puVar2 = (undefined8 *)(lVar8 + 8);
        if (lVar6 != 0) {
          puVar2 = (undefined8 *)(lVar6 + 0xa8);
        }
        plVar7 = (long *)(**(code **)(*(long *)*puVar2 + 0x30))((long *)*puVar2,0x170,8);
      }
      FUN_03d5b830(plVar7,param_1,1);
      (**(code **)(*plVar7 + 0x30))(plVar7);
      param_1[1] = plVar7;
    }
    if ((uVar4 >> 2 & 1) != 0) {
      lVar8 = *(long *)puVar3;
      if (lVar8 == 0) {
        plVar7 = malloc(0x170);
      }
      else {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        puVar2 = (undefined8 *)(lVar8 + 8);
        if (lVar6 != 0) {
          puVar2 = (undefined8 *)(lVar6 + 0xa8);
        }
        plVar7 = (long *)(**(code **)(*(long *)*puVar2 + 0x30))((long *)*puVar2,0x170,8);
      }
      FUN_03d5b830(plVar7,param_1,2);
      (**(code **)(*plVar7 + 0x30))(plVar7);
      param_1[2] = plVar7;
    }
    *(undefined4 *)(param_1 + 9) = 1;
  }
  return;
}

