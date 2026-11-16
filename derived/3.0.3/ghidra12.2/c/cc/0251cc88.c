
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0251cc88(byte *param_1,uint param_2)

{
  short *psVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  short *psVar7;
  
  uVar4 = (ulong)*param_1;
  if (uVar4 < 8) {
    if (DAT_054f5738 == 0) {
      if ((DAT_054f0c70 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(&DAT_054f0c70);
        psVar7 = &DAT_054f0c08;
        cVar2 = DAT_054f0c6c;
        if (iVar3 != 0) {
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
          cVar2 = DAT_054f0c6c;
        }
      }
      else {
        psVar7 = &DAT_054f0c08;
        cVar2 = DAT_054f0c6c;
      }
    }
    else {
      lVar5 = DAT_054f5738 + uVar4 * 0xd0 +
              (ulong)(*(uint *)(DAT_054f5738 + uVar4 * 4 + 0xd68) & 1) * 0x68;
      psVar7 = (short *)(lVar5 + 0x6e8);
      cVar2 = *(char *)(lVar5 + 0x74c);
    }
    if ((cVar2 != '\0') && (*psVar7 == DAT_04c487d4)) {
      uVar4 = FUN_0231f070(*(undefined4 *)(psVar7 + 2),param_2 & 1);
      if ((uVar4 & 1) != 0) goto LAB_0251cd8c;
      if (DAT_054f5738 == 0) {
        if ((DAT_054f0960 & 1) == 0) {
          iVar3 = __cxa_guard_acquire(&DAT_054f0960);
          puVar6 = &DAT_054f0958;
          if (iVar3 != 0) {
            DAT_054f0958 = 0;
            __cxa_guard_release(&DAT_054f0960);
          }
        }
        else {
          puVar6 = &DAT_054f0958;
        }
      }
      else {
        puVar6 = (undefined8 *)(DAT_054f5738 + 0x204);
        if ((ulong)*param_1 < 8) {
          puVar6 = puVar6 + *param_1;
        }
      }
      if ((*(uint *)((long)puVar6 + 4) >> 0xf & 1) != 0) goto LAB_0251cd8c;
    }
  }
  psVar7 = (short *)0x0;
LAB_0251cd8c:
  psVar1 = (short *)PTR_DAT_04bb2150;
  if (psVar7 != (short *)0x0) {
    psVar1 = psVar7 + 0x2a;
  }
  return *(undefined4 *)psVar1;
}

