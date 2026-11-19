
long * FUN_03b3e4f0(long param_1,long *param_2,undefined8 param_3)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
  if ((param_2 == (long *)0x0) && (param_2 = *(long **)(param_1 + 0x18), param_2 == (long *)0x0)) {
    plVar2 = *(long **)(param_1 + 0x138);
    if (plVar2 == (long *)0x0) {
      return (long *)0x0;
    }
    lVar5 = *plVar2;
    param_2 = (long *)0x0;
    goto LAB_03b3e698;
  }
  if (DAT_05ae7600 == 0) {
    plVar2 = malloc(0x158);
    if (plVar2 == (long *)0x0) goto LAB_03b3e66c;
LAB_03b3e548:
    *(undefined4 *)(plVar2 + 3) = 0x3f800000;
    puVar1 = PTR_DAT_04bd1e78;
    plVar2[6] = 0x3f800000;
    plVar2[7] = -0x100000000;
    *(undefined1 *)(plVar2 + 1) = 0;
    plVar2[10] = 0;
    *(undefined4 *)(plVar2 + 8) = 0;
    *(undefined8 *)((long)plVar2 + 0x44) = 0;
    *plVar2 = (long)(puVar1 + 0x10);
    *(undefined4 *)(plVar2 + 0xb) = 0;
    plVar2[0xc] = 0;
    plVar2[2] = (long)&PTR_FUN_04b76280;
    *(undefined8 *)((long)plVar2 + 0x1c) = 0xbf800000bf800000;
    *(undefined8 *)((long)plVar2 + 0x24) = 0xbf800000bf800000;
    *(undefined4 *)((long)plVar2 + 0x2c) = 0xbf800000;
    FUN_038e18e4(plVar2 + 0xd);
    plVar2[0x15] = 0;
    plVar2[0x16] = 0;
    plVar2[0x1e] = 0;
    puVar1 = PTR_DAT_04bd22d8;
    *(undefined2 *)((long)plVar2 + 0xfc) = 0x101;
    plVar2[0x21] = (long)(plVar2 + 0x1e);
    plVar2[0x22] = 0;
    plVar2[0x19] = 0;
    plVar2[0x1a] = 0;
    plVar2[0x1d] = 0;
    plVar2[0x17] = (long)(puVar1 + 0x10);
    *(undefined4 *)(plVar2 + 0x1f) = 0;
    plVar2[0x18] = 0;
    *(undefined1 *)((long)plVar2 + 0xfe) = 0;
    *(undefined4 *)(plVar2 + 0x25) = 0xffff000d;
    plVar2[0x20] = (long)(plVar2 + 0x18);
    plVar2[0x2a] = 0;
    plVar2[0x28] = 0;
    *(undefined8 *)((long)plVar2 + 0x145) = 0;
    plVar2[0x1b] = 0;
    plVar2[0x1c] = 0;
    plVar2[0x23] = 0;
    plVar2[0x24] = 0;
    plVar2[0x26] = 0;
    plVar2[0x27] = 0;
    uVar3 = FUN_03b3cd50(plVar2,param_3,param_2);
    if ((uVar3 & 1) != 0) {
      plVar4 = *(long **)(param_1 + 0x138);
      *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + 1;
      if (plVar4 == (long *)0x0) {
        return plVar2;
      }
      (**(code **)(*plVar4 + 0x10))(plVar4,param_2,plVar2,param_3);
      return plVar2;
    }
    (**(code **)(*plVar2 + 8))(plVar2);
    plVar2 = *(long **)(param_1 + 0x138);
  }
  else {
    plVar2 = (long *)(**(code **)(*param_2 + 0x30))(param_2,0x158,8);
    if (plVar2 != (long *)0x0) goto LAB_03b3e548;
LAB_03b3e66c:
    plVar2 = *(long **)(param_1 + 0x138);
  }
  if (plVar2 == (long *)0x0) {
    return (long *)0x0;
  }
  lVar5 = *plVar2;
LAB_03b3e698:
  (**(code **)(lVar5 + 0x10))(plVar2,param_2,0,param_3);
  return (long *)0x0;
}

