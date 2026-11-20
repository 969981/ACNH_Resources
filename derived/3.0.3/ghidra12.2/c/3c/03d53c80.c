
void FUN_03d53c80(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined *local_148;
  undefined1 *puStack_140;
  undefined4 local_138;
  undefined1 local_134 [255];
  undefined1 local_35;
  
  local_35 = 0;
  local_138 = 0x100;
  puStack_140 = local_134;
  local_134[0] = 0;
  local_148 = PTR_DAT_04bb21f8 + 0x10;
  (**(code **)(*DAT_05af83f8 + 0xb8))(DAT_05af83f8,&local_148);
  uVar3 = FUN_03eba3a0(&local_148);
  if (((uVar3 & 1) != 0) && (lVar4 = FUN_03eba220(&local_148,0x1000,0,1), lVar4 != 0)) {
    lVar7 = *(long *)PTR_DAT_04bb2698;
    if (lVar7 == 0) {
      plVar6 = malloc(0x48);
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar1 = (undefined8 *)(lVar7 + 8);
      if (lVar5 != 0) {
        puVar1 = (undefined8 *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)(**(code **)(*(long *)*puVar1 + 0x30))((long *)*puVar1,0x48,8);
    }
    puVar2 = PTR_DAT_04bd0f68;
    *(undefined4 *)(plVar6 + 2) = 0;
    plVar6[3] = 0;
    *(undefined4 *)(plVar6 + 4) = 0;
    plVar6[5] = 0;
    *(undefined4 *)(plVar6 + 6) = 0;
    plVar6[7] = 0;
    *(undefined4 *)(plVar6 + 8) = 0;
    *plVar6 = (long)(puVar2 + 0x10);
    plVar6[1] = 0;
    *(long **)(param_1 + 0x18) = plVar6;
    FUN_03d55410(plVar6,*(undefined8 *)(lVar4 + 8),0);
  }
  return;
}

