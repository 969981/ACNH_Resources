
void FUN_01369be0(undefined1 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  
  puVar2 = PTR_DAT_04bb2698;
  *param_1 = 0;
  puVar3 = PTR_DAT_04bb3350;
  lVar9 = *(long *)puVar2;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  lVar12 = *(long *)puVar2;
  puVar6 = (undefined8 *)(lVar9 + 8);
  if (lVar4 != 0) {
    puVar6 = (undefined8 *)(lVar4 + 0xa8);
  }
  plVar10 = (long *)*puVar6;
  if (lVar12 == 0) {
    puVar6 = malloc(0x158);
joined_r0x01369d3c:
    if (puVar6 != (undefined8 *)0x0) {
      *(undefined1 *)((long)puVar6 + 0x3b) = 0;
      *(undefined1 *)((long)puVar6 + 0x1c) = 0;
      puVar1 = PTR_DAT_04bb2028;
      iVar11 = 3;
      puVar6[2] = (undefined1 *)((long)puVar6 + 0x1c);
      *puVar6 = 3;
      *(undefined1 *)((long)puVar6 + 0x8c) = 0;
      puVar1 = puVar1 + 0x10;
      *(undefined4 *)(puVar6 + 3) = 0x20;
      puVar6[10] = 0;
      puVar6[0xb] = 0;
      plVar5 = puVar6 + 1;
      *plVar5 = (long)puVar1;
      puVar6[8] = &PTR_LAB_04993590;
      puVar6[9] = 0;
      *(undefined4 *)(puVar6 + 0x11) = 0x20;
      *(undefined1 *)((long)puVar6 + 0xab) = 0;
      puVar6[0x19] = 0;
      puVar6[0xc] = 0;
      puVar6[0xd] = &PTR_LAB_049935e0;
      puVar6[0xf] = puVar1;
      puVar6[0x10] = (undefined1 *)((long)puVar6 + 0x8c);
      puVar6[0x17] = 0;
      puVar6[0x18] = 0;
      *(undefined1 *)((long)puVar6 + 0xfc) = 0;
      puVar6[0x16] = &PTR_LAB_04993590;
      puVar6[0x1a] = 0;
      puVar6[0x1b] = &PTR_LAB_049935e0;
      puVar6[0x1e] = (undefined1 *)((long)puVar6 + 0xfc);
      *(undefined4 *)(puVar6 + 0x1f) = 0x20;
      *(undefined1 *)((long)puVar6 + 0x11b) = 0;
      puVar6[0x1d] = puVar1;
      puVar6[0x25] = 0;
      puVar6[0x26] = 0;
      puVar6[0x27] = 0;
      puVar6[0x24] = &PTR_LAB_04993590;
      puVar6[0x28] = 0;
      puVar6[0x29] = &PTR_LAB_049935e0;
      *(undefined4 *)(param_1 + 0xc0) = 3;
      *(long **)(param_1 + 200) = plVar5;
      goto LAB_01369d4c;
    }
  }
  else {
    plVar5 = plVar10;
    if (plVar10 != (long *)0x0) {
LAB_01369c6c:
      puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x158,8);
      goto joined_r0x01369d3c;
    }
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    plVar5 = (long *)(lVar12 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 != (long *)0x0) goto LAB_01369c6c;
  }
  iVar11 = *(int *)(param_1 + 0xc0);
  if (iVar11 == 0) {
    return;
  }
  plVar5 = *(long **)(param_1 + 200);
LAB_01369d4c:
  iVar8 = 0;
  puVar1 = PTR_DAT_04bdf1d8 + 0x10;
  do {
    lVar4 = *(long *)puVar2;
    if (lVar4 == 0) {
      plVar7 = malloc(0x20);
    }
    else {
      plVar7 = plVar10;
      if (plVar10 == (long *)0x0) {
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
        plVar7 = (long *)(lVar4 + 8);
        if (lVar9 != 0) {
          plVar7 = (long *)(lVar9 + 0xa8);
        }
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) {
          plVar7 = (long *)0x0;
          goto LAB_01369d78;
        }
      }
      plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x20,8);
    }
LAB_01369d78:
    *plVar7 = (long)puVar1;
    plVar7[1] = 0;
    plVar7[2] = 0;
    plVar7[3] = 0;
    plVar5[(long)iVar8 * 0xe + 0xb] = (long)plVar7;
    iVar8 = iVar8 + 1;
    if (iVar11 == iVar8) {
      return;
    }
  } while( true );
}

