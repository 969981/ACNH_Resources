
void FUN_0367cb60(long param_1,undefined4 param_2,undefined4 param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long *plVar6;
  bool bVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  int local_78;
  int iStack_74;
  long local_70;
  long *plStack_68;
  
  puVar2 = PTR_DAT_04bb2698;
  if (*(int *)(param_1 + 0x68) < *(int *)(param_1 + 0x6c)) {
    puVar1 = PTR_DAT_04bb2cc8 + 0x10;
    do {
      lVar11 = *(long *)puVar2;
      if (lVar11 == 0) {
        piVar5 = malloc(0xa0);
      }
      else {
        plVar4 = param_4;
        if (param_4 == (long *)0x0) {
          lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar4 = (long *)(lVar11 + 8);
          if (lVar3 != 0) {
            plVar4 = (long *)(lVar3 + 0xa8);
          }
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) {
            piVar5 = (int *)0x0;
            goto LAB_0367cc2c;
          }
        }
        piVar5 = (int *)(**(code **)(*plVar4 + 0x30))(plVar4,0xa0,8);
      }
LAB_0367cc2c:
      piVar5[0x14] = -1;
      piVar5[0x22] = 0;
      piVar5[0x23] = 0;
      *(char **)(piVar5 + 0x24) = "agl::TextureData";
      piVar5[0x26] = 0x10000;
      piVar5[0x10] = 0;
      piVar5[0x11] = 0;
      piVar5[0x12] = 0;
      piVar5[0x13] = 0;
      piVar5[0xc] = 0;
      piVar5[0xd] = 0;
      piVar5[0xe] = 0;
      piVar5[0xf] = 0;
      piVar5[8] = 0;
      piVar5[9] = 0;
      piVar5[10] = 0;
      piVar5[0xb] = 0;
      piVar5[4] = 0;
      piVar5[5] = 0;
      piVar5[6] = 0;
      piVar5[7] = 0;
      piVar5[0] = 0;
      piVar5[1] = 0;
      piVar5[2] = 0;
      piVar5[3] = 0;
      piVar5[0x16] = 0;
      piVar5[0x17] = 0;
      piVar5[0x18] = 0;
      piVar5[0x19] = 0;
      piVar5[0x1a] = 0;
      piVar5[0x1b] = 0;
      piVar5[0x1c] = 0;
      piVar5[0x1d] = 0;
      piVar5[0x1e] = 0;
      piVar5[0x1f] = 0;
      piVar5[0x20] = 0;
      piVar5[0x21] = 0;
      FUN_0390a734(piVar5,1,0x21,param_2,param_3,1,1,1,0,1);
      iVar9 = piVar5[0xf];
      iVar10 = piVar5[0x10];
      lVar11 = *(long *)puVar2;
      if (lVar11 == 0) {
        plVar4 = malloc(0x38);
      }
      else {
        plVar4 = param_4;
        if (param_4 == (long *)0x0) {
          lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar4 = (long *)(lVar11 + 8);
          if (lVar3 != 0) {
            plVar4 = (long *)(lVar3 + 0xa8);
          }
          plVar4 = (long *)*plVar4;
        }
        plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0x38,8);
      }
      bVar8 = 0;
      plVar4[6] = 0;
      plVar12 = plVar4 + 1;
      *plVar12 = 0;
      *(undefined2 *)((long)plVar4 + 0x2a) = 0;
      plVar4[2] = 0;
      plVar4[3] = 0;
      plVar4[4] = 0;
      *(undefined1 *)(plVar4 + 5) = 0;
      *plVar4 = (long)puVar1;
      plVar6 = param_4;
      if (param_4 == (long *)0x0) {
        lVar3 = *(long *)puVar2;
        lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar6 = (long *)(lVar3 + 8);
        if (lVar11 != 0) {
          plVar6 = (long *)(lVar11 + 0xa8);
        }
        plVar6 = (long *)*plVar6;
        bVar8 = *(byte *)(plVar4 + 5);
      }
      plVar4[6] = 0;
      *plVar12 = 0;
      plVar4[2] = 0;
      *(byte *)(plVar4 + 5) = bVar8 & 0xfe;
      *(undefined2 *)((long)plVar4 + 0x2a) = 0;
      plVar4[3] = 0;
      plVar4[4] = 0;
      if (iVar10 == 0) {
        local_78 = 0;
        local_70 = 0;
        iStack_74 = 0;
        *(undefined2 *)((long)plVar4 + 0x2a) = 8;
      }
      else {
        FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,plVar4,plVar6,iVar10,iVar9,8);
        *(undefined2 *)((long)plVar4 + 0x2a) = 8;
        local_70 = plVar4[3];
        local_78 = 0;
        if (plVar4[4] != 0) {
          local_78 = (int)*plVar12 - *(int *)(plVar4[4] + 0x10);
        }
        if (local_70 == 0) {
          iStack_74 = 0;
        }
        else {
          iStack_74 = *(int *)(local_70 + 0x104);
        }
      }
      *piVar5 = local_78;
      piVar5[1] = iStack_74;
      *(long *)(piVar5 + 2) = local_70;
      *(long **)(piVar5 + 4) = plVar4;
      if ((*(byte *)((long)piVar5 + 0x4e) >> 1 & 1) == 0) {
        bVar7 = false;
      }
      else {
        bVar7 = 0x11 < *(ushort *)(piVar5 + 0x26) && *(ushort *)(piVar5 + 0x26) - 0x59 < 0xffffffd6;
      }
      plStack_68 = plVar4;
      FUN_038fd3e0(piVar5 + 0x14,&local_78,piVar5 + 0xc,0,*(undefined8 *)(piVar5 + 0x24),bVar7,1);
      iVar9 = *(int *)(param_1 + 0x68);
      iVar10 = *(int *)(param_1 + 0x6c);
      if (iVar9 < iVar10) {
        *(int **)(*(long *)(param_1 + 0x70) + (long)iVar9 * 8) = piVar5;
        iVar10 = *(int *)(param_1 + 0x6c);
        iVar9 = *(int *)(param_1 + 0x68) + 1;
        *(int *)(param_1 + 0x68) = iVar9;
      }
    } while (iVar9 < iVar10);
  }
  return;
}

