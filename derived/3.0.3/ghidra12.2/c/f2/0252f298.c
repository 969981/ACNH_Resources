
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0252f298(byte *param_1)

{
  short *psVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  
  if ((DAT_054f5738 == 0) || (uVar7 = (ulong)*param_1, 7 < uVar7)) {
    if (((DAT_054f0c70 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_054f0c70), iVar3 != 0)) {
      DAT_054f0c1c._0_4_ = 0;
      DAT_054f0c1c._4_4_ = 0;
      DAT_054f0c24._0_4_ = 0;
      DAT_054f0c24._4_4_ = 0;
      DAT_054f0c2c._0_4_ = 0;
      DAT_054f0c2c._4_4_ = 0;
      DAT_054f0c68 = 1;
      DAT_054f0c6c = '\0';
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
    }
    psVar1 = &DAT_054f0c08;
    cVar2 = DAT_054f0c6c;
  }
  else {
    lVar6 = DAT_054f5738 + uVar7 * 0xd0 +
            (ulong)(*(uint *)(DAT_054f5738 + uVar7 * 4 + 0xd68) & 1) * 0x68;
    psVar1 = (short *)(lVar6 + 0x6e8);
    cVar2 = *(char *)(lVar6 + 0x74c);
  }
  if ((cVar2 == '\0') || (*psVar1 != DAT_04c487d4)) {
    iVar3 = 1;
  }
  else {
    iVar3 = *(int *)(psVar1 + 0x30);
  }
  if (iVar3 == 8) {
    if (DAT_054f5738 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(&DAT_054f0960);
        if (iVar4 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
        puVar5 = &DAT_054f0958;
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
    *(uint *)((long)puVar5 + 4) = *(uint *)((long)puVar5 + 4) | 0x40000;
  }
  return iVar3 == 8;
}

