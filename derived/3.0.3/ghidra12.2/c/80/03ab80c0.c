
void FUN_03ab80c0(long param_1,uint param_2,long *param_3)

{
  size_t __size;
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  ulong *puVar5;
  byte bVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  ulong *puVar10;
  long *plVar11;
  
  puVar2 = PTR_DAT_04bb2698;
  if (0 < (int)param_2) {
    lVar9 = *(long *)PTR_DAT_04bb2698;
    __size = (ulong)param_2 * 0x648 + 8;
    if (lVar9 == 0) {
      puVar5 = malloc(__size);
    }
    else {
      plVar4 = param_3;
      if (param_3 == (long *)0x0) {
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar4 = (long *)(lVar9 + 8);
        if (lVar3 != 0) {
          plVar4 = (long *)(lVar3 + 0xa8);
        }
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) goto LAB_03ab81a0;
      }
      puVar5 = (ulong *)(**(code **)(*plVar4 + 0x30))(plVar4,__size,8);
    }
    if (puVar5 != (ulong *)0x0) {
      lVar9 = (ulong)param_2 * 0x648;
      *puVar5 = (ulong)param_2;
      puVar10 = puVar5 + 1;
      do {
        FUN_03ab72d0(puVar10);
        puVar10 = puVar10 + 0xc9;
        lVar9 = lVar9 + -0x648;
      } while (lVar9 != 0);
      *(uint *)(param_1 + 0x1d0) = param_2;
      *(ulong **)(param_1 + 0x1d8) = puVar5 + 1;
    }
  }
LAB_03ab81a0:
  FUN_0390a734(param_1 + 0x4e0,1,10,4,4,1,1,0,0,1);
  uVar8 = *(undefined4 *)(param_1 + 0x51c);
  iVar7 = *(int *)(param_1 + 0x520);
  lVar9 = *(long *)puVar2;
  if (lVar9 == 0) {
    plVar4 = malloc(0x38);
  }
  else {
    plVar4 = param_3;
    if (param_3 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar9 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)0x0;
        goto LAB_03ab8238;
      }
    }
    plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0x38,8);
  }
LAB_03ab8238:
  plVar4[6] = 0;
  plVar11 = plVar4 + 1;
  *plVar11 = 0;
  *(undefined2 *)((long)plVar4 + 0x2a) = 0;
  bVar6 = 0;
  plVar4[4] = 0;
  plVar4[2] = 0;
  plVar4[3] = 0;
  puVar1 = PTR_DAT_04bb2cc8 + 0x10;
  *(undefined1 *)(plVar4 + 5) = 0;
  *plVar4 = (long)puVar1;
  if (param_3 == (long *)0x0) {
    lVar3 = *(long *)puVar2;
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    param_3 = (long *)(lVar3 + 8);
    if (lVar9 != 0) {
      param_3 = (long *)(lVar9 + 0xa8);
    }
    param_3 = (long *)*param_3;
    bVar6 = *(byte *)(plVar4 + 5) & 0xfe;
  }
  plVar4[6] = 0;
  *(byte *)(plVar4 + 5) = bVar6;
  *(undefined2 *)((long)plVar4 + 0x2a) = 0;
  *plVar11 = 0;
  plVar4[2] = 0;
  plVar4[3] = 0;
  plVar4[4] = 0;
  if (iVar7 == 0) {
    iVar7 = 0;
    *(undefined2 *)((long)plVar4 + 0x2a) = 8;
    lVar9 = 0;
  }
  else {
    FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,plVar4,param_3,iVar7,uVar8,8);
    lVar9 = plVar4[3];
    *(undefined2 *)((long)plVar4 + 0x2a) = 8;
    iVar7 = 0;
    if (plVar4[4] != 0) {
      iVar7 = (int)*plVar11 - *(int *)(plVar4[4] + 0x10);
    }
    if (lVar9 != 0) {
      uVar8 = *(undefined4 *)(lVar9 + 0x104);
      goto LAB_03ab8318;
    }
  }
  uVar8 = 0;
LAB_03ab8318:
  *(int *)(param_1 + 0x660) = iVar7;
  *(undefined4 *)(param_1 + 0x664) = uVar8;
  *(long *)(param_1 + 0x668) = lVar9;
  *(long **)(param_1 + 0x670) = plVar4;
  FUN_03ab8370(param_1,0);
  FUN_03ab8780(param_1,0x80,0);
  return;
}

