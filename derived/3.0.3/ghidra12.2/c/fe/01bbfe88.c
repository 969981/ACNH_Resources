
void FUN_01bbfe88(long *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  long *plVar9;
  long lVar10;
  
  if (param_1[5] == 0) {
    plVar9 = *(long **)PTR_DAT_04bc08b0;
    plVar4 = (long *)(**(code **)(*param_1 + 0x20))();
    lVar5 = (**(code **)(*plVar4 + 0x60))();
    lVar6 = (**(code **)(*plVar4 + 0x68))(plVar4);
    if ((**(char **)(lVar5 + 8) != '\0') && (**(char **)(lVar6 + 8) != '\0')) {
      lVar10 = *(long *)PTR_DAT_04bb2698;
      if (lVar10 == 0) {
        puVar8 = malloc(0x100);
      }
      else {
        if (plVar9 == (long *)0x0) {
          lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          puVar2 = (undefined8 *)(lVar10 + 8);
          if (lVar7 != 0) {
            puVar2 = (undefined8 *)(lVar7 + 0xa8);
          }
          plVar9 = (long *)*puVar2;
        }
        puVar8 = (undefined4 *)(**(code **)(*plVar9 + 0x30))(plVar9,0x100,8);
      }
      *puVar8 = 0;
      puVar1 = PTR_DAT_04bdf0c8;
      puVar8[5] = 0;
      puVar3 = PTR_DAT_04bdf1d8;
      *(undefined1 *)(puVar8 + 4) = 1;
      *(undefined8 *)(puVar8 + 10) = 0;
      *(undefined8 *)(puVar8 + 0xc) = 0;
      *(undefined8 *)(puVar8 + 0xe) = 0;
      *(undefined8 *)(puVar8 + 0x10) = 0;
      *(undefined **)(puVar8 + 2) = puVar1 + 0x10;
      puVar8[0x12] = 0;
      *(undefined1 *)((long)puVar8 + 0xa3) = 0;
      *(undefined1 *)(puVar8 + 0x19) = 0;
      *(undefined8 *)(puVar8 + 6) = 0;
      *(undefined **)(puVar8 + 8) = puVar3 + 0x10;
      puVar8[0x18] = 0x40;
      puVar1 = PTR_DAT_04bb2bc0 + 0x10;
      puVar8[0x2e] = 0x40;
      *(undefined1 *)((long)puVar8 + 0xfb) = 0;
      *(undefined1 *)(puVar8 + 0x2f) = 0;
      *(undefined **)(puVar8 + 0x14) = puVar1;
      *(undefined4 **)(puVar8 + 0x16) = puVar8 + 0x19;
      *(undefined **)(puVar8 + 0x2a) = puVar1;
      *(undefined4 **)(puVar8 + 0x2c) = puVar8 + 0x2f;
      param_1[5] = (long)puVar8;
      FUN_01c09c30(puVar8,lVar5,lVar6);
      return;
    }
  }
  return;
}

