
void FUN_039fa590(long param_1,long param_2,long param_3,byte *param_4,int param_5,int param_6)

{
  ushort uVar1;
  byte *pbVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined4 local_68;
  undefined2 local_64 [2];
  
  lVar11 = *(long *)(param_3 + 8);
  if (lVar11 != 0) {
    lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x120) + (ulong)*(ushort *)(param_1 + 0x16) * 0x80;
    uVar9 = *(ulong *)(lVar5 + 0x60);
    if (uVar9 != 0) {
      lVar6 = 0;
      if (*(long *)(lVar5 + 0x40) != 0 && (*(ushort *)(lVar5 + 8) & 1) != 0) {
        lVar6 = *(long *)(lVar5 + 0x40) + (long)param_6 * 0x48;
      }
      uVar4 = (*DAT_04c620e0)(*(undefined8 *)(lVar6 + 8));
      uVar9 = uVar9 & 0xffffffff;
      uVar10 = *(undefined8 *)(param_2 + 0xb8);
      if (*(char *)(lVar11 + 0xb0) != -1) {
        (**(code **)PTR_DAT_04bcf2e8)(uVar10,0,(long)*(char *)(lVar11 + 0xb0),uVar4,uVar9);
      }
      if (*(char *)(lVar11 + 0xb1) != -1) {
        (**(code **)PTR_DAT_04bcf2e8)(uVar10,1,(long)*(char *)(lVar11 + 0xb1),uVar4,uVar9);
      }
      if (*(char *)(lVar11 + 0xb2) != -1) {
        (**(code **)PTR_DAT_04bcf2e8)(uVar10,2,(long)*(char *)(lVar11 + 0xb2),uVar4,uVar9);
      }
      if (*(char *)(lVar11 + 0xb3) != -1) {
        (**(code **)PTR_DAT_04bcf2e8)(uVar10,5,(long)*(char *)(lVar11 + 0xb3),uVar4,uVar9);
      }
    }
    lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x118);
    lVar5 = lVar7 + (ulong)*(ushort *)(param_1 + 0x14) * 0x70;
    lVar6 = *(long *)(lVar5 + 0x20);
    iVar8 = param_6;
    if (*(char *)(lVar5 + 0xd) != '\0') {
      iVar8 = param_6 + (uint)*(byte *)(lVar7 + (ulong)*(ushort *)(param_1 + 0x14) * 0x70 + 0xf) *
                        param_5;
    }
    lVar5 = 0;
    if (lVar6 != 0) {
      lVar5 = lVar6 + (long)iVar8 * 0x48;
    }
    uVar4 = (*DAT_04c620e0)(*(undefined8 *)(lVar5 + 8));
    puVar3 = PTR_DAT_04bcf2e8;
    uVar10 = *(undefined8 *)(param_2 + 0xb8);
    if (*(char *)(lVar11 + 0xa0) != -1) {
      (**(code **)PTR_DAT_04bcf2e8)(uVar10,0,(long)*(char *)(lVar11 + 0xa0),uVar4,0x100);
    }
    if (*(char *)(lVar11 + 0xa1) != -1) {
      (**(code **)puVar3)(uVar10,1,(long)*(char *)(lVar11 + 0xa1),uVar4,0x100);
    }
    if (*(char *)(lVar11 + 0xa2) != -1) {
      (**(code **)puVar3)(uVar10,2,(long)*(char *)(lVar11 + 0xa2),uVar4,0x100);
    }
    if (*(char *)(lVar11 + 0xa3) != -1) {
      (**(code **)puVar3)(uVar10,5,(long)*(char *)(lVar11 + 0xa3),uVar4,0x100);
    }
    lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x110);
    uVar9 = *(ulong *)(lVar5 + 0x48);
    if (uVar9 != 0) {
      lVar6 = *(long *)(lVar5 + 0x40);
      lVar5 = 0;
      if (lVar6 != 0) {
        lVar5 = lVar6 + (long)param_6 * 0x48;
      }
      uVar4 = (*DAT_04c620e0)(*(undefined8 *)(lVar5 + 8));
      uVar9 = uVar9 & 0xffffffff;
      uVar10 = *(undefined8 *)(param_2 + 0xb8);
      if (*(char *)(lVar11 + 0x98) != -1) {
        (**(code **)puVar3)(uVar10,0,(long)*(char *)(lVar11 + 0x98),uVar4,uVar9);
      }
      if (*(char *)(lVar11 + 0x99) != -1) {
        (**(code **)puVar3)(uVar10,1,(long)*(char *)(lVar11 + 0x99),uVar4,uVar9);
      }
      if (*(char *)(lVar11 + 0x9a) != -1) {
        (**(code **)puVar3)(uVar10,2,(long)*(char *)(lVar11 + 0x9a),uVar4,uVar9);
      }
      if (*(char *)(lVar11 + 0x9b) != -1) {
        (**(code **)puVar3)(uVar10,5,(long)*(char *)(lVar11 + 0x9b),uVar4,uVar9);
      }
    }
    puVar3 = PTR_DAT_04bc1010;
    if ((param_4 != (byte *)0x0) && (iVar8 = *(int *)(param_4 + 0x408), 0 < iVar8)) {
      lVar11 = 0;
      uVar1 = *(ushort *)(param_1 + 0x16);
      lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x120);
      pbVar2 = param_4;
      do {
        uVar9 = (ulong)pbVar2[0x20];
        lVar6 = *(long *)(*(long *)(lVar5 + (ulong)uVar1 * 0x80 + 0x50) + uVar9 * 8);
        if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x40), lVar6 != 0)) {
          local_68 = (undefined4)*(undefined8 *)(lVar6 + 0x90);
          local_64[0] = (undefined2)*(undefined8 *)(*(long *)(*(long *)param_4 + 0x88) + uVar9 * 8);
          FUN_038fb810(*(undefined8 *)puVar3,param_2,pbVar2 + 8,&local_68,local_64);
          iVar8 = *(int *)(param_4 + 0x408);
        }
        lVar11 = lVar11 + 1;
        pbVar2 = pbVar2 + 0x20;
      } while (lVar11 < iVar8);
    }
  }
  return;
}

