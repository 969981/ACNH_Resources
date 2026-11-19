
void FUN_03a714c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint *puVar1;
  int iVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  int *piVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  int iVar12;
  
  FUN_03a72a80(param_1 + 0x1d0,param_2,param_3,8);
  iVar2 = *(int *)(param_1 + 0x1d0);
  if (iVar2 != 0) {
    lVar11 = *(long *)(param_1 + 0x1d8);
    iVar12 = 0;
    do {
      plVar10 = (long *)(lVar11 + (long)iVar12 * 0x560);
      if (iVar12 == 0) {
        FUN_0390d714(plVar10,4,param_3);
        piVar8 = (int *)(*(long *)plVar10[1] + (ulong)*(ushort *)(plVar10[1] + 10) * 0xc);
        *(undefined1 *)(piVar8 + 2) = 3;
        *piVar8 = 1;
        *(undefined2 *)((long)piVar8 + 6) = 1;
        uVar6 = (int)plVar10[6] + 3U & 0xfffffffc;
        *(uint *)(plVar10 + 6) = uVar6;
        *(short *)(piVar8 + 1) = (short)uVar6;
        *(uint *)(plVar10 + 6) = (int)plVar10[6] + (uint)*(ushort *)((long)piVar8 + 6) * *piVar8 * 4
        ;
        *(short *)(plVar10[1] + 10) = *(short *)(plVar10[1] + 10) + 1;
        plVar9 = (long *)plVar10[1];
        uVar3 = *(ushort *)((long)plVar9 + 10);
        if (uVar3 == *(ushort *)(plVar9 + 1)) {
          *(uint *)(plVar10 + 6) = (int)plVar10[6] + 0x1fU & 0xffffffe0;
          uVar3 = *(ushort *)((long)plVar9 + 10);
        }
        piVar8 = (int *)(*plVar9 + (ulong)uVar3 * 0xc);
        *(undefined1 *)(piVar8 + 2) = 3;
        *piVar8 = 1;
        *(undefined2 *)((long)piVar8 + 6) = 1;
        uVar6 = (int)plVar10[6] + 3U & 0xfffffffc;
        *(uint *)(plVar10 + 6) = uVar6;
        *(short *)(piVar8 + 1) = (short)uVar6;
        *(uint *)(plVar10 + 6) = (int)plVar10[6] + (uint)*(ushort *)((long)piVar8 + 6) * *piVar8 * 4
        ;
        *(short *)(plVar10[1] + 10) = *(short *)(plVar10[1] + 10) + 1;
        plVar9 = (long *)plVar10[1];
        uVar3 = *(ushort *)((long)plVar9 + 10);
        if (uVar3 == *(ushort *)(plVar9 + 1)) {
          *(uint *)(plVar10 + 6) = (int)plVar10[6] + 0x1fU & 0xffffffe0;
          uVar3 = *(ushort *)((long)plVar9 + 10);
        }
        piVar8 = (int *)(*plVar9 + (ulong)uVar3 * 0xc);
        *(undefined1 *)(piVar8 + 2) = 4;
        *piVar8 = 1;
        *(undefined2 *)((long)piVar8 + 6) = 2;
        uVar6 = (int)plVar10[6] + 7U & 0xfffffff8;
        *(uint *)(plVar10 + 6) = uVar6;
        *(short *)(piVar8 + 1) = (short)uVar6;
        *(uint *)(plVar10 + 6) = (int)plVar10[6] + (uint)*(ushort *)((long)piVar8 + 6) * *piVar8 * 4
        ;
        *(short *)(plVar10[1] + 10) = *(short *)(plVar10[1] + 10) + 1;
        plVar9 = (long *)plVar10[1];
        uVar3 = *(ushort *)((long)plVar9 + 10);
        if (uVar3 == *(ushort *)(plVar9 + 1)) {
          *(uint *)(plVar10 + 6) = (int)plVar10[6] + 0x1fU & 0xffffffe0;
          uVar3 = *(ushort *)((long)plVar9 + 10);
        }
        piVar8 = (int *)(*plVar9 + (ulong)uVar3 * 0xc);
        *(undefined1 *)(piVar8 + 2) = 6;
        *piVar8 = 4;
        uVar6 = (**(code **)(*plVar10 + 0x18))(plVar10,6);
        *(ushort *)((long)piVar8 + 6) = (ushort)uVar6 & 0xff;
        uVar6 = ((uVar6 & 0xff) * 4 + (int)plVar10[6]) - 1 & (uVar6 & 0xff) * -4;
        *(uint *)(plVar10 + 6) = uVar6;
        *(short *)(piVar8 + 1) = (short)uVar6;
        *(uint *)(plVar10 + 6) = (int)plVar10[6] + (uint)*(ushort *)((long)piVar8 + 6) * *piVar8 * 4
        ;
        *(short *)(plVar10[1] + 10) = *(short *)(plVar10[1] + 10) + 1;
        if (*(short *)(plVar10[1] + 10) == *(short *)(plVar10[1] + 8)) {
          *(uint *)(plVar10 + 6) = (int)plVar10[6] + 0x1fU & 0xffffffe0;
        }
      }
      else {
        lVar7 = *(long *)(param_1 + 0x1d8);
        plVar10[1] = *(long *)(lVar7 + 8);
        *(undefined4 *)(plVar10 + 6) = *(undefined4 *)(lVar7 + 0x30);
        *(byte *)((long)plVar10 + 0x3c) = *(byte *)((long)plVar10 + 0x3c) & 0xfe;
      }
      FUN_0390d990(plVar10,param_3,2,1);
      lVar7 = lVar11 + (long)iVar12 * 0x560;
      *(undefined2 *)(lVar7 + 0x13c) = 0;
      *(undefined1 *)(lVar7 + 0x13e) = 0;
      puVar1 = (uint *)(lVar7 + 0x14c);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = *puVar1 | 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      lVar7 = lVar11 + (long)iVar12 * 0x560;
      iVar12 = iVar12 + 1;
      *(undefined2 *)(lVar7 + 0x558) = 0;
      *(undefined8 *)(lVar7 + 0x318) = 0;
      *(undefined8 *)(lVar7 + 800) = 0;
      *(undefined8 *)(lVar7 + 0x328) = 0;
      *(undefined4 *)(lVar7 + 0x55c) = 0xffffffff;
    } while (iVar2 != iVar12);
  }
  return;
}

