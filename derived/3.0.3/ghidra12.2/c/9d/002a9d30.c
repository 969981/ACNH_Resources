
void FUN_002a9d30(uint *param_1,long param_2)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_bc [4];
  long local_b8 [5];
  byte local_90;
  byte local_8f;
  ushort local_8e;
  
  memset(param_1,0,4);
  lVar3 = FUN_002a9208(*(undefined8 *)(param_2 + 0x28),0);
  if (lVar3 != 0) {
    iVar6 = 0;
    do {
      lVar3 = FUN_002a9208(*(undefined8 *)(param_2 + 0x28),iVar6);
      if (*(char *)(lVar3 + 0x658) != '\0') {
        FUN_002a9208(*(undefined8 *)(param_2 + 0x28),iVar6);
        uVar4 = FUN_0022b868();
        if (((uVar4 & 1) != 0) &&
           (lVar3 = FUN_002a9208(*(undefined8 *)(param_2 + 0x28),iVar6), *(int *)(lVar3 + 0x14) != 0
           )) {
          lVar3 = FUN_002a9208(*(undefined8 *)(param_2 + 0x28),iVar6);
          if (*(int *)(lVar3 + 0x5fc) == -1) {
            memset(param_1,0xff,4);
            return;
          }
          lVar3 = FUN_002a9208(*(undefined8 *)(param_2 + 0x28),iVar6);
          *param_1 = *param_1 | *(uint *)(lVar3 + 0x5fc);
          FUN_002aba30(local_b8);
          lVar3 = FUN_002a9208(*(undefined8 *)(param_2 + 0x28),iVar6);
          if ((*(byte *)(lVar3 + 0x1a) + 0x20 <= *(uint *)(lVar3 + 0x5f8)) &&
             (*(uint *)(lVar3 + 0x5f8) - 0x20 != (uint)*(byte *)(lVar3 + 0x1a))) {
            uVar7 = 0;
            while( true ) {
              uVar5 = FUN_002a9208(*(undefined8 *)(param_2 + 0x28),iVar6);
              FUN_002abaa0(local_b8,uVar5,uVar7);
              if (local_b8[0] == 0) break;
              if ((local_8f & 1) != 0) {
                memset(auStack_bc,0,4);
                uVar2 = FUN_002abe4c(local_b8);
                *param_1 = *param_1 | uVar2;
              }
              uVar1 = local_8e;
              iVar8 = 1;
              if ((local_90 & 1) != 0) {
                iVar8 = 2;
              }
              if ((local_90 & 2) != 0) {
                iVar8 = iVar8 + 2;
              }
              if ((local_90 & 4) != 0) {
                iVar8 = iVar8 + 4;
              }
              if ((local_90 & 8) != 0) {
                iVar8 = iVar8 + 8;
              }
              lVar3 = FUN_002a9208(*(undefined8 *)(param_2 + 0x28),iVar6);
              if ((*(uint *)(lVar3 + 0x5f8) < *(byte *)(lVar3 + 0x1a) + 0x20) ||
                 (uVar7 = uVar7 + (((uint)uVar1 + iVar8) - 1 & 0xfffffffc) + 4,
                 (*(uint *)(lVar3 + 0x5f8) - (uint)*(byte *)(lVar3 + 0x1a)) - 0x20 <= uVar7)) break;
            }
          }
          FUN_002aba88(local_b8);
        }
      }
      iVar6 = iVar6 + 1;
      lVar3 = FUN_002a9208(*(undefined8 *)(param_2 + 0x28),iVar6);
    } while (lVar3 != 0);
  }
  return;
}

