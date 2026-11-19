
void FUN_039c05e4(long param_1,long param_2,long *param_3)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  int *piVar7;
  
  *(undefined1 *)(param_1 + 0xcc) = *(undefined1 *)(param_2 + 0xc);
  lVar1 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    puVar6 = malloc(0x18);
  }
  else {
    plVar5 = param_3;
    if (param_3 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar1 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) goto LAB_039c0694;
    }
    puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x18,8);
  }
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar6 + 0xc) = 0;
    *(undefined2 *)(puVar6 + 1) = 0xff;
    *puVar6 = 2;
    *(undefined2 *)(puVar6 + 2) = 0xff;
    *(undefined4 *)((long)puVar6 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0xb8) = 2;
    *(undefined8 **)(param_1 + 0xc0) = puVar6 + 1;
  }
LAB_039c0694:
  FUN_039c2870(param_1 + 0x150,1,param_3,8);
  FUN_039c09b0(param_1,*(undefined4 *)(param_2 + 8),1,param_3);
  lVar1 = param_1 + 0x310;
  FUN_0390d714(lVar1,3,param_3);
  piVar7 = (int *)(**(long **)(param_1 + 0x318) +
                  (ulong)*(ushort *)((long)*(long **)(param_1 + 0x318) + 10) * 0xc);
  *(undefined1 *)(piVar7 + 2) = 3;
  *piVar7 = 2;
  uVar3 = (**(code **)(*(long *)(param_1 + 0x310) + 0x18))(lVar1,3);
  *(ushort *)((long)piVar7 + 6) = (ushort)uVar3 & 0xff;
  uVar3 = ((uVar3 & 0xff) * 4 + *(int *)(param_1 + 0x340)) - 1 & (uVar3 & 0xff) * -4;
  *(uint *)(param_1 + 0x340) = uVar3;
  *(short *)(piVar7 + 1) = (short)uVar3;
  *(uint *)(param_1 + 0x340) =
       *(int *)(param_1 + 0x340) + (uint)*(ushort *)((long)piVar7 + 6) * *piVar7 * 4;
  *(short *)(*(long *)(param_1 + 0x318) + 10) = *(short *)(*(long *)(param_1 + 0x318) + 10) + 1;
  plVar5 = *(long **)(param_1 + 0x318);
  uVar2 = *(ushort *)((long)plVar5 + 10);
  if (uVar2 == *(ushort *)(plVar5 + 1)) {
    *(uint *)(param_1 + 0x340) = *(int *)(param_1 + 0x340) + 0x1fU & 0xffffffe0;
    uVar2 = *(ushort *)((long)plVar5 + 10);
  }
  piVar7 = (int *)(*plVar5 + (ulong)uVar2 * 0xc);
  *(undefined1 *)(piVar7 + 2) = 3;
  *piVar7 = 2;
  uVar3 = (**(code **)(*(long *)(param_1 + 0x310) + 0x18))(lVar1,3);
  *(ushort *)((long)piVar7 + 6) = (ushort)uVar3 & 0xff;
  uVar3 = ((uVar3 & 0xff) * 4 + *(int *)(param_1 + 0x340)) - 1 & (uVar3 & 0xff) * -4;
  *(uint *)(param_1 + 0x340) = uVar3;
  *(short *)(piVar7 + 1) = (short)uVar3;
  *(uint *)(param_1 + 0x340) =
       *(int *)(param_1 + 0x340) + (uint)*(ushort *)((long)piVar7 + 6) * *piVar7 * 4;
  *(short *)(*(long *)(param_1 + 0x318) + 10) = *(short *)(*(long *)(param_1 + 0x318) + 10) + 1;
  plVar5 = *(long **)(param_1 + 0x318);
  uVar2 = *(ushort *)((long)plVar5 + 10);
  if (uVar2 == *(ushort *)(plVar5 + 1)) {
    *(uint *)(param_1 + 0x340) = *(int *)(param_1 + 0x340) + 0x1fU & 0xffffffe0;
    uVar2 = *(ushort *)((long)plVar5 + 10);
  }
  piVar7 = (int *)(*plVar5 + (ulong)uVar2 * 0xc);
  *(undefined1 *)(piVar7 + 2) = 3;
  *piVar7 = 1;
  *(undefined2 *)((long)piVar7 + 6) = 1;
  uVar3 = *(int *)(param_1 + 0x340) + 3U & 0xfffffffc;
  *(uint *)(param_1 + 0x340) = uVar3;
  *(short *)(piVar7 + 1) = (short)uVar3;
  *(uint *)(param_1 + 0x340) =
       *(int *)(param_1 + 0x340) + (uint)*(ushort *)((long)piVar7 + 6) * *piVar7 * 4;
  *(short *)(*(long *)(param_1 + 0x318) + 10) = *(short *)(*(long *)(param_1 + 0x318) + 10) + 1;
  if (*(short *)(*(long *)(param_1 + 0x318) + 10) == *(short *)(*(long *)(param_1 + 0x318) + 8)) {
    *(uint *)(param_1 + 0x340) = *(int *)(param_1 + 0x340) + 0x1fU & 0xffffffe0;
  }
  FUN_0390d990(lVar1,param_3,2,1);
  lVar1 = param_1 + 0x388;
  FUN_0390d714(lVar1,1,param_3);
  piVar7 = (int *)(**(long **)(param_1 + 0x390) +
                  (ulong)*(ushort *)((long)*(long **)(param_1 + 0x390) + 10) * 0xc);
  *(undefined1 *)(piVar7 + 2) = 6;
  *piVar7 = 7;
  uVar3 = (**(code **)(*(long *)(param_1 + 0x388) + 0x18))(lVar1,6);
  *(ushort *)((long)piVar7 + 6) = (ushort)uVar3 & 0xff;
  uVar3 = ((uVar3 & 0xff) * 4 + *(int *)(param_1 + 0x3b8)) - 1 & (uVar3 & 0xff) * -4;
  *(uint *)(param_1 + 0x3b8) = uVar3;
  *(short *)(piVar7 + 1) = (short)uVar3;
  *(uint *)(param_1 + 0x3b8) =
       *(int *)(param_1 + 0x3b8) + (uint)*(ushort *)((long)piVar7 + 6) * *piVar7 * 4;
  *(short *)(*(long *)(param_1 + 0x390) + 10) = *(short *)(*(long *)(param_1 + 0x390) + 10) + 1;
  if (*(short *)(*(long *)(param_1 + 0x390) + 10) == *(short *)(*(long *)(param_1 + 0x390) + 8)) {
    *(uint *)(param_1 + 0x3b8) = *(int *)(param_1 + 0x3b8) + 0x1fU & 0xffffffe0;
  }
  FUN_0390d990(lVar1,param_3,2,1);
  return;
}

