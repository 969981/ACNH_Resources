
void FUN_039ba850(long param_1,long param_2,long param_3,uint param_4,int param_5)

{
  short sVar1;
  char cVar2;
  byte bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined8 local_70;
  undefined8 uStack_68;
  
  param_5 = param_5 + param_4 * 4;
  param_1 = param_1 + 0x10;
  lVar10 = *(long *)(param_1 + (long)param_5 * 0x38 + 0x10);
  if (lVar10 != 0) {
    plVar8 = (long *)(param_1 + (long)param_5 * 0x38 + 0x18);
    lVar6 = *plVar8;
    if (*(char *)(lVar6 + 0x229) != '\0') {
      FUN_0034820c(param_2 + 8,lVar6 + 0x188);
      pbVar11 = (byte *)*plVar8;
      if ((pbVar11[0x229] != 0) && (*pbVar11 != 0)) {
        uVar9 = 0;
        pbVar12 = pbVar11 + 0x14;
        do {
          local_70 = 0;
          uStack_68 = 0;
          FUN_00347d1c(*(undefined8 *)(pbVar12 + -0xc),&local_70);
          FUN_0034836c(param_2 + 8,uVar9 & 0xffffffff,&local_70,*(undefined4 *)(pbVar12 + -4),
                       *(undefined4 *)pbVar12);
          uVar9 = uVar9 + 1;
          pbVar12 = pbVar12 + 0x18;
        } while (uVar9 < *pbVar11);
      }
    }
    cVar2 = *(char *)(param_1 + (long)param_5 * 0x38 + 0x33);
    if ((((uint)(int)cVar2 < *(uint *)(param_3 + 0x18)) &&
        (lVar6 = *(long *)(*(long *)(param_3 + 0x20) + (long)(int)cVar2 * 8),
        (*(uint *)(lVar6 + 0xc0) >> (ulong)(param_4 & 0x1f) & 1) != 0)) &&
       ((*(byte *)(lVar6 + 0x10) & 1) != 0)) {
      bVar3 = *(byte *)(*(long *)(lVar6 + 8) + 0xf3);
      if ((-1 < (char)bVar3) &&
         (sVar1 = *(short *)(*(long *)(*(long *)(lVar6 + 8) + 0x58) + (ulong)bVar3 * 0x20 + 0x1a),
         sVar1 != 0)) {
        uVar5 = (*DAT_04c620e0)(*(undefined8 *)(*(long *)(lVar6 + 0x48) + 8));
        puVar4 = PTR_DAT_04bcf2e8;
        uVar7 = *(undefined8 *)(param_2 + 0xb8);
        if (*(char *)(lVar10 + 0xb4) != -1) {
          (**(code **)PTR_DAT_04bcf2e8)(uVar7,0,(long)*(char *)(lVar10 + 0xb4),uVar5,sVar1);
        }
        if (*(char *)(lVar10 + 0xb5) != -1) {
          (**(code **)puVar4)(uVar7,1,(long)*(char *)(lVar10 + 0xb5),uVar5,sVar1);
        }
        if (*(char *)(lVar10 + 0xb6) != -1) {
          (**(code **)puVar4)(uVar7,2,(long)*(char *)(lVar10 + 0xb6),uVar5,sVar1);
        }
        if (*(char *)(lVar10 + 0xb7) != -1) {
                    /* WARNING: Could not recover jumptable at 0x039baa40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)puVar4)(uVar7,5,(long)*(char *)(lVar10 + 0xb7),uVar5,sVar1);
          return;
        }
      }
    }
  }
  return;
}

