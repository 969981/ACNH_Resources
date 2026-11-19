
void FUN_039c65e8(long param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  long lVar5;
  int *piVar6;
  
  puVar1 = PTR_DAT_04bb2698;
  if (param_2 == (long *)0x0) {
    return;
  }
  if (*(long *)PTR_DAT_04bb2698 == 0) {
    puVar3 = malloc(0x10);
    *(undefined8 **)(param_1 + 0x28) = puVar3;
LAB_039c6678:
    pvVar4 = malloc(0xc);
  }
  else {
    puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x30))(param_2,0x10,8);
    lVar5 = *(long *)puVar1;
    *(undefined8 **)(param_1 + 0x28) = puVar3;
    if (lVar5 == 0) goto LAB_039c6678;
    pvVar4 = (void *)(**(code **)(*param_2 + 0x30))(param_2,0xc,8);
    puVar3 = *(undefined8 **)(param_1 + 0x28);
  }
  *puVar3 = pvVar4;
  *(undefined2 *)(*(long *)(param_1 + 0x28) + 8) = 1;
  *(undefined2 *)(*(long *)(param_1 + 0x28) + 10) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) | 1;
  piVar6 = (int *)(**(long **)(param_1 + 0x28) +
                  (ulong)*(ushort *)((long)*(long **)(param_1 + 0x28) + 10) * 0xc);
  *piVar6 = 1;
  *(undefined1 *)(piVar6 + 2) = 6;
  *(undefined2 *)((long)piVar6 + 6) = 4;
  uVar2 = *(int *)(param_1 + 0x50) + 0xfU & 0xfffffff0;
  *(uint *)(param_1 + 0x50) = uVar2;
  *(short *)(piVar6 + 1) = (short)uVar2;
  *(uint *)(param_1 + 0x50) =
       *(int *)(param_1 + 0x50) + (uint)*(ushort *)((long)piVar6 + 6) * *piVar6 * 4;
  *(short *)(*(long *)(param_1 + 0x28) + 10) = *(short *)(*(long *)(param_1 + 0x28) + 10) + 1;
  if (*(short *)(*(long *)(param_1 + 0x28) + 10) == *(short *)(*(long *)(param_1 + 0x28) + 8)) {
    *(uint *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 0x1fU & 0xffffffe0;
  }
  if (*(long *)puVar1 == 0) {
    puVar3 = malloc(0x10);
    *(undefined8 **)(param_1 + 0xa0) = puVar3;
  }
  else {
    puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x30))(param_2,0x10,8);
    lVar5 = *(long *)puVar1;
    *(undefined8 **)(param_1 + 0xa0) = puVar3;
    if (lVar5 != 0) {
      pvVar4 = (void *)(**(code **)(*param_2 + 0x30))(param_2,0xc,8);
      puVar3 = *(undefined8 **)(param_1 + 0xa0);
      goto LAB_039c67a4;
    }
  }
  pvVar4 = malloc(0xc);
LAB_039c67a4:
  *puVar3 = pvVar4;
  *(undefined2 *)(*(long *)(param_1 + 0xa0) + 8) = 1;
  *(undefined2 *)(*(long *)(param_1 + 0xa0) + 10) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(byte *)(param_1 + 0xd4) = *(byte *)(param_1 + 0xd4) | 1;
  piVar6 = (int *)(**(long **)(param_1 + 0xa0) +
                  (ulong)*(ushort *)((long)*(long **)(param_1 + 0xa0) + 10) * 0xc);
  *(undefined1 *)(piVar6 + 2) = 6;
  *piVar6 = 7;
  uVar2 = (**(code **)(*(long *)(param_1 + 0x98) + 0x18))(param_1 + 0x98,6);
  *(ushort *)((long)piVar6 + 6) = (ushort)uVar2 & 0xff;
  uVar2 = ((uVar2 & 0xff) * 4 + *(int *)(param_1 + 200)) - 1 & (uVar2 & 0xff) * -4;
  *(uint *)(param_1 + 200) = uVar2;
  *(short *)(piVar6 + 1) = (short)uVar2;
  *(uint *)(param_1 + 200) =
       *(int *)(param_1 + 200) + (uint)*(ushort *)((long)piVar6 + 6) * *piVar6 * 4;
  *(short *)(*(long *)(param_1 + 0xa0) + 10) = *(short *)(*(long *)(param_1 + 0xa0) + 10) + 1;
  if (*(short *)(*(long *)(param_1 + 0xa0) + 10) == *(short *)(*(long *)(param_1 + 0xa0) + 8)) {
    *(uint *)(param_1 + 200) = *(int *)(param_1 + 200) + 0x1fU & 0xffffffe0;
  }
  FUN_0390d990(param_1 + 0x20,param_2,1,1);
  FUN_0390d990(param_1 + 0x98,param_2,1,1);
  return;
}

