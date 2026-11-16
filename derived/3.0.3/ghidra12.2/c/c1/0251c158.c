
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0251c158(byte *param_1,undefined8 param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  short *psVar6;
  undefined4 uVar7;
  
  uVar3 = (ulong)*param_1;
  uVar7 = 0;
  if (uVar3 < 8) {
    if (DAT_054f5738 == 0) {
      if ((DAT_054f0c70 & 1) == 0) {
        iVar2 = __cxa_guard_acquire(&DAT_054f0c70);
        psVar6 = &DAT_054f0c08;
        cVar1 = DAT_054f0c6c;
        if (iVar2 != 0) {
          DAT_054f0c1c._0_4_ = 0;
          DAT_054f0c1c._4_4_ = 0;
          DAT_054f0c68 = 1;
          DAT_054f0c6c = '\0';
          DAT_054f0c24._0_4_ = 0;
          DAT_054f0c24._4_4_ = 0;
          DAT_054f0c2c._0_4_ = 0;
          DAT_054f0c2c._4_4_ = 0;
          _DAT_054f0c44 = 0;
          DAT_054f0c34._0_4_ = 0;
          DAT_054f0c34._4_4_ = 0;
          DAT_054f0c3c._0_4_ = 0;
          DAT_054f0c3c._4_4_ = 0;
          _DAT_054f0c08 = 0;
          _DAT_054f0c10 = 1;
          DAT_054f0c14._0_4_ = 0;
          DAT_054f0c14._4_4_ = 0;
          DAT_054f0c48 = 0;
          DAT_054f0c50 = 0;
          DAT_054f0c58 = 0;
          DAT_054f0c60 = 0;
          __cxa_guard_release(&DAT_054f0c70);
          cVar1 = DAT_054f0c6c;
        }
      }
      else {
        psVar6 = &DAT_054f0c08;
        cVar1 = DAT_054f0c6c;
      }
    }
    else {
      lVar4 = DAT_054f5738 + uVar3 * 0xd0 +
              (ulong)(*(uint *)(DAT_054f5738 + uVar3 * 4 + 0xd68) & 1) * 0x68;
      psVar6 = (short *)(lVar4 + 0x6e8);
      cVar1 = *(char *)(lVar4 + 0x74c);
    }
    if ((cVar1 != '\0') && (*psVar6 == DAT_04c487d4)) {
      uVar3 = FUN_0231f070(*(undefined4 *)(psVar6 + 2),param_3 & 1);
      if ((uVar3 & 1) == 0) {
        if (DAT_054f5738 == 0) {
          if ((DAT_054f0960 & 1) == 0) {
            iVar2 = __cxa_guard_acquire(&DAT_054f0960);
            puVar5 = &DAT_054f0958;
            if (iVar2 != 0) {
              DAT_054f0958 = 0;
              __cxa_guard_release(&DAT_054f0960);
            }
          }
          else {
            puVar5 = &DAT_054f0958;
          }
        }
        else {
          puVar5 = (undefined8 *)(DAT_054f5738 + 0x204);
          if ((ulong)*param_1 < 8) {
            puVar5 = puVar5 + *param_1;
          }
        }
        if ((*(uint *)((long)puVar5 + 4) >> 0xf & 1) == 0) {
          return 0;
        }
      }
      uVar7 = *(undefined4 *)(psVar6 + 0x28);
    }
  }
  return uVar7;
}

