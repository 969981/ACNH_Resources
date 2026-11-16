
void FUN_0285ec20(void)

{
  uint *puVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar3 = PTR_DAT_04bb46b0;
  puVar9 = *(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10);
  if ((*(byte *)(*(long *)PTR_DAT_04bb46b0 + 0x453) & 1) == 0) {
    lVar5 = (**(code **)(*(long *)*puVar9 + 0x38))();
    lVar10 = 0;
    if (lVar5 != 0) {
      lVar10 = lVar5 + 0x70;
    }
  }
  else if (puVar9 == (undefined8 *)0x0) {
    lVar10 = 0;
  }
  else {
    lVar10 = 0;
    if ((long *)puVar9[0x26] != (long *)0x0) {
      lVar10 = (**(code **)(*(long *)puVar9[0x26] + 0x38))();
    }
  }
  lVar5 = *(long *)(lVar10 + 0xe7290);
  if (lVar5 == 0) {
    uVar6 = 0;
  }
  else {
    if (*(undefined8 **)(lVar5 + 0x10) == (undefined8 *)0x0) {
      uVar6 = 0;
      plVar7 = *(long **)(lVar5 + 0x20);
    }
    else {
      uVar6 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
      uVar6 = uVar6 & 0xffffffff;
      if (*(long *)(lVar10 + 0xe7290) == 0) goto LAB_0285ed0c;
      plVar7 = *(long **)(*(long *)(lVar10 + 0xe7290) + 0x20);
    }
    if (plVar7 != (long *)0x0) {
      local_78 = *(long *)(lVar10 + 0xe7270);
      local_70 = *(undefined8 *)(lVar10 + 0xe7278);
      uStack_68 = 0x1c;
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_78);
    }
  }
LAB_0285ed0c:
  puVar1 = (uint *)(*(long *)(lVar10 + 0xe7278) + *(long *)(lVar10 + 0xe7270));
  puVar1[0] = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined1 *)(puVar1 + 6) = 2;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  uVar4 = nn::os::GetSystemTick();
  uVar2 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
  uVar4 = uVar2 ^ uVar2 * 0x800;
  uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 2;
  uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 3;
  uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 4;
  *puVar1 = (uint)((ulong)(uVar4 >> 8 ^ uVar2 >> 0x13 ^ uVar4 ^ uVar2) * 0x7fffffff >> 0x20) |
            0x80000000;
  if ((((uVar6 & 1) != 0) && (*(long *)(lVar10 + 0xe7290) != 0)) &&
     (puVar9 = *(undefined8 **)(*(long *)(lVar10 + 0xe7290) + 0x18), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)();
  }
  lVar10 = *(long *)puVar3;
  if (lVar10 != 0) {
    puVar9 = *(undefined8 **)(lVar10 + 0x10);
    if ((*(byte *)(lVar10 + 0x453) & 1) == 0) {
      lVar10 = (**(code **)(*(long *)*puVar9 + 0x38))();
      if (lVar10 != 0) {
        lVar10 = lVar10 + 0x70;
        goto LAB_0285ee00;
      }
    }
    else if (((puVar9 != (undefined8 *)0x0) && ((long *)puVar9[0x26] != (long *)0x0)) &&
            (lVar10 = (**(code **)(*(long *)puVar9[0x26] + 0x38))(), lVar10 != 0)) {
LAB_0285ee00:
      lVar5 = *(long *)(lVar10 + 0x1c25c8);
      if (lVar5 == 0) {
        uVar6 = 0;
      }
      else {
        if (*(undefined8 **)(lVar5 + 0x10) == (undefined8 *)0x0) {
          uVar6 = 0;
          plVar7 = *(long **)(lVar5 + 0x20);
        }
        else {
          uVar6 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
          uVar6 = uVar6 & 0xffffffff;
          if (*(long *)(lVar10 + 0x1c25c8) == 0) goto LAB_0285ee74;
          plVar7 = *(long **)(*(long *)(lVar10 + 0x1c25c8) + 0x20);
        }
        if (plVar7 != (long *)0x0) {
          local_78 = *(long *)(lVar10 + 0x1c25a8);
          local_70 = *(undefined8 *)(lVar10 + 0x1c25b0);
          uStack_68 = 0x10;
          (**(code **)(*plVar7 + 0x20))(plVar7,&local_78);
        }
      }
LAB_0285ee74:
      puVar9 = (undefined8 *)(*(long *)(lVar10 + 0x1c25b0) + *(long *)(lVar10 + 0x1c25a8));
      uVar4 = nn::os::GetSystemTick();
      uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
      uVar2 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 2;
      uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 3;
      *puVar9 = (&DAT_04057c60)
                [((uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 4 ^ uVar4 * 0x800 ^ uVar4) >> 0x1e];
      *(undefined2 *)(puVar9 + 1) = 0x100;
      if ((((uVar6 & 1) != 0) && (*(long *)(lVar10 + 0x1c25c8) != 0)) &&
         (puVar9 = *(undefined8 **)(*(long *)(lVar10 + 0x1c25c8) + 0x18),
         puVar9 != (undefined8 *)0x0)) {
        (**(code **)*puVar9)();
      }
    }
  }
  FUN_007f3cd8();
  FUN_007f44d0();
  lVar5 = *(long *)PTR_DAT_04bb2698;
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  puVar9 = (undefined8 *)(lVar5 + 8);
  if (lVar10 != 0) {
    puVar9 = (undefined8 *)(lVar10 + 0xa8);
  }
  FUN_007f6210(*puVar9);
  FUN_0285f050();
  lVar10 = *(long *)puVar3;
  puVar9 = *(undefined8 **)(lVar10 + 0x10);
  if ((*(byte *)(lVar10 + 0x453) & 1) == 0) {
    lVar5 = (**(code **)(*(long *)*puVar9 + 0x38))();
    lVar10 = 0;
    if (lVar5 != 0) {
      lVar10 = lVar5 + 0x70;
    }
  }
  else if (puVar9 == (undefined8 *)0x0) {
    lVar10 = 0;
  }
  else {
    lVar10 = 0;
    if ((long *)puVar9[0x26] != (long *)0x0) {
      lVar10 = (**(code **)(*(long *)puVar9[0x26] + 0x38))();
    }
  }
  plVar7 = (long *)(lVar10 + 0x1c2500);
  lVar5 = *(long *)(lVar10 + 0x1c2520);
  if (lVar5 == 0) {
    FUN_0277d0d0(*(long *)(lVar10 + 0x1c2508) + *plVar7);
    goto LAB_0285f010;
  }
  if (*(undefined8 **)(lVar5 + 0x10) == (undefined8 *)0x0) {
    uVar6 = 0;
    plVar8 = *(long **)(lVar5 + 0x20);
joined_r0x0285f040:
    if (plVar8 != (long *)0x0) {
      local_78 = *plVar7;
      local_70 = *(undefined8 *)(lVar10 + 0x1c2508);
      uStack_68 = 2;
      (**(code **)(*plVar8 + 0x20))(plVar8,&local_78);
    }
  }
  else {
    uVar6 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
    uVar6 = uVar6 & 0xffffffff;
    if (*(long *)(lVar10 + 0x1c2520) != 0) {
      plVar8 = *(long **)(*(long *)(lVar10 + 0x1c2520) + 0x20);
      goto joined_r0x0285f040;
    }
  }
  FUN_0277d0d0(*(long *)(lVar10 + 0x1c2508) + *plVar7);
  if ((((uVar6 & 1) != 0) && (*(long *)(lVar10 + 0x1c2520) != 0)) &&
     (puVar9 = *(undefined8 **)(*(long *)(lVar10 + 0x1c2520) + 0x18), puVar9 != (undefined8 *)0x0))
  {
    (**(code **)*puVar9)();
  }
LAB_0285f010:
  FUN_0275b0a4();
  FUN_0285f270();
  return;
}

