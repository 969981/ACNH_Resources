
void FUN_03b25cd4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  
  uVar2 = FUN_03b25fc0();
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar3 = FUN_0037e610(param_1,"HoverButtonAnim");
  if (lVar3 == 0) {
    return;
  }
  lVar4 = FUN_03b185ec(param_2,lVar3 + (ulong)*(uint *)(lVar3 + 4),1);
  lVar3 = DAT_05ae7600;
  if (lVar4 == 0) {
    return;
  }
  plVar8 = *(long **)PTR_DAT_04bd0810;
  if (DAT_05ae7600 == 0) {
    puVar7 = malloc(0x68);
  }
  else {
    plVar6 = plVar8;
    if (plVar8 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar6 = (long *)(lVar3 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        puVar7 = (undefined8 *)0x0;
        goto LAB_03b25da4;
      }
    }
    puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,0x68,8);
  }
LAB_03b25da4:
  puVar1 = puVar7 + 1;
  *(undefined2 *)(puVar7 + 7) = 0;
  puVar7[4] = 0;
  puVar7[5] = puVar7 + 5;
  puVar7[6] = puVar7 + 5;
  puVar7[8] = 0x2201f;
  puVar7[9] = 0;
  *(undefined1 *)((long)puVar7 + 0x3e) = 0;
  puVar7[0xc] = 0;
  puVar7[2] = puVar1;
  puVar7[3] = 0;
  puVar7[10] = 0;
  puVar7[0xb] = 0;
  *puVar7 = &PTR_LAB_04b74010;
  puVar7[1] = puVar1;
  FUN_03b25aa0(puVar7,plVar8,param_1,lVar4,param_2);
  plVar8 = (long *)(param_3 + 8);
  lVar3 = puVar7[1];
  puVar7[1] = *plVar8;
  *(long **)(lVar3 + 8) = plVar8;
  *(undefined8 **)(*plVar8 + 8) = puVar1;
  *plVar8 = lVar3;
  return;
}

