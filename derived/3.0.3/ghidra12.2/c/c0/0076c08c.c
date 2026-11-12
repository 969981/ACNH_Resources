
undefined8 FUN_0076c08c(long param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  undefined2 *puVar3;
  short *psVar4;
  undefined *puVar5;
  undefined4 uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  long local_50;
  char local_47;
  
  lVar9 = param_1 + 0x14;
  lVar2 = lVar9 + ((ulong)~*(uint *)(param_1 + 0x10) & 1) * 0x20;
  if (*param_2 != 1) {
    if (*param_2 == 0) {
      if (*(int *)(lVar2 + 0x18) == 2) {
        *(int *)(lVar2 + 0x18) = 0;
        FUN_0076c480(lVar2,param_1 + 0xc,1,0,1);
        return 1;
      }
      return 0;
    }
    if (*(int *)(lVar2 + 0x18) != 2) {
      return 0;
    }
    *(int *)(lVar2 + 0x18) = 0;
    FUN_0076c480(lVar2,param_1 + 0xc,1,1,1);
    FUN_0076b868(lVar9 + ((ulong)*(uint *)(param_1 + 0x10) & 1) * 0x20,param_1 + 0xc,0,
                 *(undefined1 *)(param_1 + 0xca));
    uVar7 = *(int *)(param_1 + 0x10) + 1;
    *(uint *)(param_1 + 0x10) = uVar7;
    uVar8 = (**(code **)(*(long *)(param_1 + 0x78) + 0x10))((long *)(param_1 + 0x78));
    if ((uVar8 & 1) == 0) {
      return 1;
    }
    goto LAB_0076c244;
  }
  if (*(int *)(lVar2 + 0x18) != 0) {
    return 0;
  }
  lVar1 = param_1 + 0xc;
  FUN_0076c480(lVar2,lVar1,1,1,0);
  puVar3 = (undefined2 *)(lVar9 + ((ulong)*(uint *)(param_1 + 0x10) & 1) * 0x20);
  piVar10 = (int *)(puVar3 + 10);
  if (*piVar10 == 0) {
LAB_0076c174:
    *(undefined4 *)(puVar3 + 0xc) = 0;
    *piVar10 = 0;
    *puVar3 = DAT_05586008;
    *(undefined1 *)(puVar3 + 1) = DAT_0558600a;
    *(undefined1 *)((long)puVar3 + 3) = DAT_0558600b;
    uVar6 = DAT_0558600c;
    puVar3[0xe] = 0;
    *(undefined4 *)(puVar3 + 2) = uVar6;
    *(undefined8 *)(puVar3 + 4) = 0xffffffff00000000;
  }
  else {
    FUN_0071c8d0(&local_50,piVar10,lVar1,0);
    if (local_50 == 0) {
LAB_0076c15c:
      FUN_0076c480(puVar3,lVar1,0,1,1);
      goto LAB_0076c174;
    }
    if (local_47 != '\0') {
      FUN_006fb3d0();
      goto LAB_0076c15c;
    }
  }
  uVar7 = *(int *)(param_1 + 0x10) + 1;
  *(uint *)(param_1 + 0x10) = uVar7;
  uVar8 = (**(code **)(*(long *)(param_1 + 0x78) + 0x10))((long *)(param_1 + 0x78));
  if ((uVar8 & 1) == 0) {
    return 1;
  }
LAB_0076c244:
  puVar5 = PTR_DAT_04bb43c0;
  psVar4 = (short *)(lVar9 + (ulong)(uVar7 & 1) * 0x20);
  if (((char)psVar4[8] == '\0') || (*psVar4 != -2)) {
    lVar9 = *(long *)PTR_DAT_04bb43c0;
    uVar7 = FUN_0277d6c4(psVar4);
    if (*(long *)puVar5 == 0) {
      return 1;
    }
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if (*(uint *)(lVar9 + 0x1d8) <= uVar7) {
      return 1;
    }
    if (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar7 * 8) == 0) {
      return 1;
    }
  }
  (*(code *)**(undefined8 **)(param_1 + 0x78))((undefined8 *)(param_1 + 0x78),psVar4);
  return 1;
}

