
void FUN_002aa740(void *param_1,int *param_2,uint *param_3,long *param_4)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  if ((char)param_2[1] != '\0') {
    lVar5 = FUN_002ba790(*(undefined8 *)PTR_DAT_04bc1510);
    lVar10 = *(long *)(lVar5 + 0x98);
    if (lVar10 != 0) {
      iVar3 = *param_2;
      plVar6 = (long *)FUN_00228380();
      lVar11 = *plVar6;
      lVar12 = *param_4;
      memset(param_1,0,4);
      lVar7 = *(long *)(lVar5 + 0x20);
      if (lVar7 != lVar5 + 0x18) {
        uVar1 = *param_3;
        do {
          lVar8 = *(long *)(lVar7 + 0x10);
          if (((lVar8 != lVar10) && (*(int *)(lVar8 + 0x4c) == 5)) &&
             (bVar2 = *(byte *)(lVar8 + 0x38), bVar2 < 0x20)) {
            uVar4 = 1 << (ulong)(bVar2 & 0x1f);
            if ((uVar1 & uVar4) == 0) {
              if (*(ulong *)(lVar8 + 0x78) < (ulong)(lVar12 - lVar11 * iVar3)) {
                uVar9 = (ulong)(bVar2 >> 3) & 0x1c;
                *(uint *)((long)param_1 + uVar9) = *(uint *)((long)param_1 + uVar9) | uVar4;
              }
            }
            else {
              *(long *)(lVar8 + 0x78) = *param_4;
            }
          }
          lVar7 = *(long *)(lVar7 + 8);
        } while (lVar7 != lVar5 + 0x18);
      }
      return;
    }
  }
  memset(param_1,0,4);
  return;
}

