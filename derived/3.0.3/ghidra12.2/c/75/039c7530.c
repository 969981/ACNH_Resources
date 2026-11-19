
void FUN_039c7530(long param_1,long *param_2)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  long *plVar13;
  
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    plVar5 = malloc(0x18);
joined_r0x039c75cc:
    if (plVar5 != (long *)0x0) {
      *(long **)(param_1 + 0x278) = plVar5;
      *(undefined4 *)(param_1 + 0x270) = 3;
      goto LAB_039c75d4;
    }
  }
  else {
    plVar5 = param_2;
    if (param_2 != (long *)0x0) {
LAB_039c759c:
      plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x18,8);
      goto joined_r0x039c75cc;
    }
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar5 = (long *)(lVar9 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 != (long *)0x0) goto LAB_039c759c;
  }
  plVar5 = *(long **)(param_1 + 0x278);
LAB_039c75d4:
  lVar4 = DAT_05ae9af0;
  lVar9 = *(long *)(DAT_05ae9af0 + 0x40) + 0x930;
  if (*(uint *)(DAT_05ae9af0 + 0x38) < 8) {
    lVar9 = 0;
  }
  *plVar5 = lVar9;
  lVar9 = *(long *)(lVar4 + 0x40) + 0xa80;
  if (*(uint *)(lVar4 + 0x38) < 9) {
    lVar9 = 0;
  }
  *(long *)(*(long *)(param_1 + 0x278) + (ulong)(1 < *(uint *)(param_1 + 0x270)) * 8) = lVar9;
  lVar9 = *(long *)(lVar4 + 0x40) + 0xd20;
  if (*(uint *)(lVar4 + 0x38) < 0xb) {
    lVar9 = 0;
  }
  *(long *)(*(long *)(param_1 + 0x278) + (ulong)(2 < *(uint *)(param_1 + 0x270)) * 0x10) = lVar9;
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 != 0) {
    lVar9 = *(long *)(param_1 + 0x38);
    iVar10 = 0;
    iVar11 = 0;
    do {
      plVar5 = (long *)(lVar9 + (long)iVar11 * 0xe8 + 0x70);
      if (iVar10 == 0) {
        FUN_0390d714(plVar5,2,param_2);
        lVar4 = lVar9 + (long)iVar11 * 0xe8;
        plVar13 = (long *)(lVar4 + 0x78);
        piVar8 = (int *)(*(long *)*plVar13 + (ulong)*(ushort *)(*plVar13 + 10) * 0xc);
        *(undefined1 *)(piVar8 + 2) = 6;
        *piVar8 = 4;
        uVar3 = (**(code **)(*plVar5 + 0x18))(plVar5,6);
        *(ushort *)((long)piVar8 + 6) = (ushort)uVar3 & 0xff;
        puVar12 = (uint *)(lVar4 + 0xa0);
        uVar3 = ((uVar3 & 0xff) * 4 + *puVar12) - 1 & (uVar3 & 0xff) * -4;
        *puVar12 = uVar3;
        *(short *)(piVar8 + 1) = (short)uVar3;
        *puVar12 = *puVar12 + (uint)*(ushort *)((long)piVar8 + 6) * *piVar8 * 4;
        *(short *)(*plVar13 + 10) = *(short *)(*plVar13 + 10) + 1;
        plVar6 = (long *)*plVar13;
        uVar2 = *(ushort *)((long)plVar6 + 10);
        if (uVar2 == *(ushort *)(plVar6 + 1)) {
          *puVar12 = *puVar12 + 0x1f & 0xffffffe0;
          uVar2 = *(ushort *)((long)plVar6 + 10);
        }
        piVar8 = (int *)(*plVar6 + (ulong)uVar2 * 0xc);
        *(undefined1 *)(piVar8 + 2) = 6;
        *piVar8 = 3;
        uVar3 = (**(code **)(*plVar5 + 0x18))(plVar5,6);
        *(ushort *)((long)piVar8 + 6) = (ushort)uVar3 & 0xff;
        uVar3 = ((uVar3 & 0xff) * 4 + *puVar12) - 1 & (uVar3 & 0xff) * -4;
        *puVar12 = uVar3;
        *(short *)(piVar8 + 1) = (short)uVar3;
        *puVar12 = *puVar12 + (uint)*(ushort *)((long)piVar8 + 6) * *piVar8 * 4;
        *(short *)(*plVar13 + 10) = *(short *)(*plVar13 + 10) + 1;
        if (*(short *)(*plVar13 + 10) == *(short *)(*plVar13 + 8)) {
          *puVar12 = *puVar12 + 0x1f & 0xffffffe0;
        }
      }
      else {
        lVar4 = *(long *)(param_1 + 0x38);
        lVar7 = lVar9 + (long)iVar11 * 0xe8;
        *(undefined8 *)(lVar7 + 0x78) = *(undefined8 *)(lVar4 + 0x78);
        *(undefined4 *)(lVar7 + 0xa0) = *(undefined4 *)(lVar4 + 0xa0);
        *(byte *)(lVar7 + 0xac) = *(byte *)(lVar7 + 0xac) & 0xfe;
      }
      FUN_0390d990(plVar5,param_2,1,1);
      iVar11 = iVar11 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar1 != iVar11);
  }
  return;
}

