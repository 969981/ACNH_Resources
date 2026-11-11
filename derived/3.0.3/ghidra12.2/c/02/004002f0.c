
void FUN_004002f0(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  int iVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined *local_78;
  ushort local_70;
  undefined *local_68;
  undefined1 local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  
  puVar3 = (undefined8 *)*param_2;
  puVar11 = (undefined8 *)param_2[1];
  while (puVar11 != puVar3) {
    puVar11 = puVar11 + -7;
    (**(code **)*puVar11)(puVar11);
  }
  param_2[1] = (long)puVar3;
  lVar4 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(param_1 + 0x18);
  if ((ulong)(*(long *)(lVar4 + 0x18) - lVar5) < 4) {
    *(undefined1 *)(param_1 + 8) = 1;
    return;
  }
  iVar9 = *(int *)(*(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 0x28) + lVar5);
  *(long *)(param_1 + 0x18) = lVar5 + 4;
  FUN_0040a8b0(param_2,iVar9);
  puVar7 = PTR_DAT_04bd28a0;
  puVar6 = PTR_DAT_04bd26e0;
  if (iVar9 != 0) {
    puVar1 = PTR_DAT_04bd26e0 + 0x10;
    puVar2 = PTR_DAT_04bd28a0 + 0x10;
    do {
      while( true ) {
        if (*(char *)(param_1 + 8) != '\0') {
          return;
        }
        local_70 = local_70 & 0xff00;
        local_60 = 0;
        local_78 = puVar2;
        local_68 = puVar1;
        FUN_003ffcdc(param_1,&local_78);
        plVar8 = (long *)param_2[1];
        if (*(char *)(param_1 + 8) != '\0') {
          plVar10 = (long *)*param_2;
          if (plVar8 == plVar10) {
            return;
          }
          do {
            plVar8 = plVar8 + -7;
            (**(code **)*plVar8)(plVar8);
          } while (plVar8 != plVar10);
          param_2[1] = (long)plVar10;
          return;
        }
        if (plVar8 == (long *)param_2[2]) break;
        *(ushort *)(plVar8 + 1) = local_70;
        *(undefined1 *)(plVar8 + 3) = local_60;
        plVar8[4] = local_58;
        *(undefined4 *)(plVar8 + 5) = local_50;
        plVar8[2] = (long)(puVar6 + 0x10);
        plVar8[6] = local_48;
        *plVar8 = (long)(puVar7 + 0x10);
        param_2[1] = (long)(plVar8 + 7);
        iVar9 = iVar9 + -1;
        if (iVar9 == 0) {
          return;
        }
      }
      FUN_0040aa10(param_2,&local_78);
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  return;
}

