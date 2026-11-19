
void FUN_03b744d0(undefined8 param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  puVar2 = PTR_DAT_04bb3350;
  puVar1 = PTR_DAT_04bb2698;
  lVar7 = *param_2;
  if (lVar7 != 0) {
    lVar8 = 0;
    lVar9 = 0;
    while( true ) {
      iVar6 = 0;
      if (lVar7 != 0) {
        iVar6 = *(int *)(lVar7 + 8);
      }
      if (iVar6 <= lVar9) break;
      lVar7 = *(long *)puVar1;
      if (lVar7 == 0) {
        puVar3 = malloc(0x20);
      }
      else {
        plVar5 = param_3;
        if (param_3 == (long *)0x0) {
          lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
          plVar5 = (long *)(lVar7 + 8);
          if (lVar4 != 0) {
            plVar5 = (long *)(lVar4 + 0xa8);
          }
          plVar5 = (long *)*plVar5;
        }
        puVar3 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x20,8);
      }
      *puVar3 = 0x3f80000000000000;
      puVar3[1] = 0x3f80000000000000;
      puVar3[2] = 0;
      puVar3[3] = 0;
      lVar7 = *param_2 + lVar8;
      *(undefined4 *)puVar3 = *(undefined4 *)(lVar7 + 0xc);
      *(undefined4 *)((long)puVar3 + 4) = *(undefined4 *)(lVar7 + 0x10);
      *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(lVar7 + 0x14);
      *(undefined4 *)((long)puVar3 + 0xc) = *(undefined4 *)(lVar7 + 0x18);
      FUN_03b745f0(param_1,puVar3);
      lVar7 = *param_2;
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 0x10;
    }
  }
  return;
}

