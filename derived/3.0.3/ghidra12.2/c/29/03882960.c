
void FUN_03882960(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  void *pvVar9;
  long lVar10;
  undefined1 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  FUN_0387d620(param_1 + 8);
  uVar1 = *(undefined8 *)(param_2 + 0x78);
  uVar3 = *(undefined8 *)(param_2 + 0x80);
  local_48 = *(undefined8 *)(param_2 + 0x70);
  local_68 = *(undefined8 *)(param_2 + 0x50);
  uStack_60 = *(undefined8 *)(param_2 + 0x58);
  local_58 = *(undefined8 *)(param_2 + 0x60);
  uStack_50 = *(undefined8 *)(param_2 + 0x68);
  local_88 = (undefined4)*(undefined8 *)(param_2 + 0x30);
  uStack_84 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x30) >> 0x20);
  uStack_80 = (undefined4)*(undefined8 *)(param_2 + 0x38);
  uStack_7c = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x38) >> 0x20);
  local_78 = (undefined4)*(undefined8 *)(param_2 + 0x40);
  uStack_74 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x40) >> 0x20);
  uStack_70 = (undefined4)*(undefined8 *)(param_2 + 0x48);
  local_6c = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x48) >> 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  uStack_8c = (undefined4)((ulong)uVar4 >> 0x20);
  local_38._1_1_ = (char)((ulong)uVar3 >> 8);
  if (local_38._1_1_ != '\0') {
    uStack_8c = 1000;
    local_88 = 0x96;
    uStack_7c = 10;
    local_78 = 10;
    uStack_84 = 0x96;
    uStack_80 = 0x96;
    uStack_74 = 5;
    uStack_70 = 5;
    local_6c = 2;
  }
  local_38._0_1_ = (undefined1)uVar3;
  *(undefined1 *)(param_1 + 0x48) = (undefined1)local_38;
  local_90 = (undefined1)uVar4;
  uStack_40._4_4_ = (undefined4)((ulong)uVar1 >> 0x20);
  uVar6 = uStack_40._4_4_;
  uStack_40 = uVar1;
  local_38 = uVar3;
  FUN_03882f50(uVar2,(long)&local_68 + 4,&uStack_8c,local_90,uVar6);
  FUN_0018e780();
  *(undefined1 *)(param_1 + 0x49) = 1;
  uVar5 = *(uint *)(param_2 + 0x90);
  lVar10 = *(long *)PTR_DAT_04bb2698;
  if (lVar10 == 0) {
    pvVar9 = malloc((ulong)uVar5);
  }
  else {
    plVar7 = *(long **)(param_2 + 0x88);
    if (plVar7 == (long *)0x0) {
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar7 = (long *)(lVar10 + 8);
      if (lVar8 != 0) {
        plVar7 = (long *)(lVar8 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      pvVar9 = (void *)0x0;
      if (plVar7 == (long *)0x0) goto LAB_03882a94;
    }
    pvVar9 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,(ulong)uVar5,4);
  }
LAB_03882a94:
  *(void **)(param_1 + 0x58) = pvVar9;
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 0x94);
  return;
}

