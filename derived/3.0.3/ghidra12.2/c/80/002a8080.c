
void FUN_002a8080(long param_1,undefined8 param_2)

{
  long *plVar1;
  byte bVar2;
  ushort uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint local_54;
  
  plVar4 = (long *)FUN_002ba790(*(undefined8 *)PTR_DAT_04bc1510);
  memset(&local_54,0,4);
  lVar5 = FUN_002a925c(*(undefined8 *)(param_1 + 0x30),0);
  if (lVar5 != 0) {
    iVar8 = 0;
    plVar1 = (long *)(param_1 + 0x38);
    do {
      lVar5 = FUN_002a925c(*(undefined8 *)(param_1 + 0x30),iVar8);
      if ((*(char *)(lVar5 + 0x658) != '\0') &&
         (uVar7 = (uint)*(byte *)(lVar5 + 0x1a), *(int *)(lVar5 + 0x10) != 0 || uVar7 != 0)) {
        if (uVar7 + 0x20 <= *(uint *)(lVar5 + 0x5f8) && *(uint *)(lVar5 + 0x5f8) - 0x20 != uVar7) {
          uVar7 = 0;
          while (FUN_002abaa0(plVar1,lVar5,uVar7), *plVar1 != 0) {
            bVar2 = *(byte *)(param_1 + 0x60);
            uVar3 = *(ushort *)(param_1 + 0x62);
            iVar9 = 1;
            if ((bVar2 & 1) != 0) {
              iVar9 = 2;
            }
            if ((bVar2 & 2) != 0) {
              iVar9 = iVar9 + 2;
            }
            if ((bVar2 & 4) != 0) {
              iVar9 = iVar9 + 4;
            }
            if ((bVar2 & 8) != 0) {
              iVar9 = iVar9 + 8;
            }
            lVar6 = FUN_002abe54(plVar1);
            if (((lVar6 != 0) && (lVar6 = (**(code **)(*plVar4 + 0x38))(plVar4,lVar6), lVar6 != 0))
               && (1 < (*(byte *)(lVar6 + 0x38) + 3 & 0xff))) {
              local_54 = local_54 | 1 << (ulong)(*(byte *)(lVar6 + 0x38) & 0x1f);
            }
            if ((*(uint *)(lVar5 + 0x5f8) < *(byte *)(lVar5 + 0x1a) + 0x20) ||
               (uVar7 = uVar7 + (((uint)uVar3 + iVar9) - 1 & 0xfffffffc) + 4,
               (*(uint *)(lVar5 + 0x5f8) - (uint)*(byte *)(lVar5 + 0x1a)) - 0x20 <= uVar7)) break;
          }
        }
        lVar5 = (**(code **)(*plVar4 + 0x60))(plVar4,lVar5 + 0x630);
        if ((lVar5 != 0) && (*(byte *)(lVar5 + 0x38) < 0x20)) {
          local_54 = local_54 | 1 << (ulong)(*(byte *)(lVar5 + 0x38) & 0x1f);
        }
      }
      iVar8 = iVar8 + 1;
      lVar5 = FUN_002a925c(*(undefined8 *)(param_1 + 0x30),iVar8);
    } while (lVar5 != 0);
  }
  FUN_002a6de0(param_1 + 0xf4,&local_54,param_2);
  return;
}

