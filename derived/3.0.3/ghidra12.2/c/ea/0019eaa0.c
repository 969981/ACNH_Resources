
void FUN_0019eaa0(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long local_28;
  
  switch(*(undefined4 *)(param_2 + 0x40)) {
  case 0:
    *(undefined4 *)(param_2 + 0x40) = 3;
  case 3:
    lVar4 = *(long *)(param_1 + 0x110);
    if ((param_3 & 1) == 0) {
      if (lVar4 == *(long *)(param_1 + 0x120)) {
        *(long *)(param_1 + 0x110) = param_2;
      }
      else {
        *(long *)(*(long *)(param_1 + 0x118) + 0x10) = param_2;
        *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x118);
      }
      *(long *)(param_1 + 0x118) = param_2;
      plVar5 = (long *)(param_1 + 0x128);
    }
    else {
      if (lVar4 == *(long *)(param_1 + 0x120)) {
        plVar5 = (long *)(param_1 + 0x118);
      }
      else {
        *(long *)(param_2 + 0x10) = lVar4;
        plVar5 = (long *)(*(long *)(param_1 + 0x110) + 0x18);
      }
      *plVar5 = param_2;
      plVar5 = (long *)(param_1 + 0x128);
      *(long *)(param_1 + 0x110) = param_2;
    }
    break;
  case 1:
    if (DAT_04be21f1 == '\0') {
      FUN_0018cb8c(&local_28);
    }
    else {
      FUN_0018c9b0(&local_28,0);
    }
    *(long *)PTR_DAT_04bcbcb0 = local_28;
    uVar1 = *(uint *)(param_2 + 0x44);
    uVar6 = (ulong)uVar1;
    if ((int)uVar1 < 0) {
      uVar6 = -(ulong)-uVar1;
    }
    puVar3 = (undefined8 *)FUN_00187df4(0x30);
    puVar3[4] = uVar6 + local_28;
    puVar3[5] = param_2;
    puVar2 = *(undefined8 **)(param_1 + 0x160);
    if (*(undefined8 **)(param_1 + 0x160) == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)(param_1 + 0x160);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = puVar7;
      *puVar7 = puVar3;
      lVar4 = **(long **)(param_1 + 0x158);
    }
    else {
      do {
        while (puVar7 = puVar2, uVar6 + local_28 < (ulong)puVar7[4]) {
          puVar2 = (undefined8 *)*puVar7;
          if ((undefined8 *)*puVar7 == (undefined8 *)0x0) {
            *puVar3 = 0;
            puVar3[1] = 0;
            puVar3[2] = puVar7;
            *puVar7 = puVar3;
            lVar4 = **(long **)(param_1 + 0x158);
            goto joined_r0x0019ec80;
          }
        }
        puVar2 = (undefined8 *)puVar7[1];
      } while ((undefined8 *)puVar7[1] != (undefined8 *)0x0);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = puVar7;
      puVar7[1] = puVar3;
      lVar4 = **(long **)(param_1 + 0x158);
      puVar7 = puVar7 + 1;
    }
joined_r0x0019ec80:
    if (lVar4 != 0) {
      *(long *)(param_1 + 0x158) = lVar4;
      puVar3 = (undefined8 *)*puVar7;
    }
    FUN_03876250(*(undefined8 *)(param_1 + 0x160),puVar3);
    plVar5 = (long *)(param_1 + 0x168);
    break;
  case 2:
    lVar4 = *(long *)(param_1 + 0x138);
    if ((param_3 & 1) == 0) {
      if (lVar4 == *(long *)(param_1 + 0x148)) {
        *(long *)(param_1 + 0x138) = param_2;
      }
      else {
        *(long *)(*(long *)(param_1 + 0x140) + 0x10) = param_2;
        *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x140);
      }
      *(long *)(param_1 + 0x140) = param_2;
      plVar5 = (long *)(param_1 + 0x150);
    }
    else {
      if (lVar4 == *(long *)(param_1 + 0x148)) {
        plVar5 = (long *)(param_1 + 0x140);
      }
      else {
        *(long *)(param_2 + 0x10) = lVar4;
        plVar5 = (long *)(*(long *)(param_1 + 0x138) + 0x18);
      }
      *plVar5 = param_2;
      plVar5 = (long *)(param_1 + 0x150);
      *(long *)(param_1 + 0x138) = param_2;
    }
    break;
  default:
    goto switchD_0019ead4_default;
  }
  *plVar5 = *plVar5 + 1;
switchD_0019ead4_default:
  FUN_0018ada0(param_1 + 0x20);
  return;
}

