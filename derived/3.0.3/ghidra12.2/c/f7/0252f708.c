
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0252f708(byte *param_1,ulong param_2,undefined2 *param_3)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  long lVar4;
  short *psVar5;
  ulong uVar6;
  
  if ((param_3 == (undefined2 *)0x0) || (DAT_054f5738 == 0)) {
LAB_0252f74c:
    if ((DAT_054f5738 != 0) && (uVar6 = (ulong)*param_1, uVar6 < 8)) {
      psVar5 = (short *)(DAT_054f5738 + uVar6 * 0xd0 +
                         (ulong)(*(uint *)(DAT_054f5738 + uVar6 * 4 + 0xd68) & 1) * 0x68 + 0x6e8);
      goto LAB_0252f790;
    }
  }
  else if ((ulong)*param_1 < 8) {
    *param_3 = *(undefined2 *)(DAT_054f5738 + (ulong)*param_1 * 2 + 0xe50);
    goto LAB_0252f74c;
  }
  if ((DAT_054f0c70 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_054f0c70);
    if (iVar2 != 0) {
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
    psVar5 = &DAT_054f0c08;
    param_2 = param_2 & 0xffffffff;
  }
  else {
    psVar5 = &DAT_054f0c08;
  }
LAB_0252f790:
  if (((((char)psVar5[0x32] == '\0') || (*psVar5 != *(short *)PTR_DAT_04bb6298)) ||
      (0x148 < *(uint *)(psVar5 + 2))) || (*(uint *)(psVar5 + 2) != 0x7a)) {
    if ((DAT_054f5738 == 0) || (uVar6 = (ulong)*param_1, 7 < uVar6)) {
      if ((DAT_054f0c70 & 1) == 0) {
        iVar2 = __cxa_guard_acquire(&DAT_054f0c70);
        if (iVar2 != 0) {
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
        psVar5 = &DAT_054f0c08;
        param_2 = param_2 & 0xffffffff;
        cVar1 = DAT_054f0c6c;
      }
      else {
        psVar5 = &DAT_054f0c08;
        cVar1 = DAT_054f0c6c;
      }
    }
    else {
      lVar4 = DAT_054f5738 + uVar6 * 0xd0 +
              (ulong)(*(uint *)(DAT_054f5738 + uVar6 * 4 + 0xd68) & 1) * 0x68;
      psVar5 = (short *)(lVar4 + 0x6e8);
      cVar1 = *(char *)(lVar4 + 0x74c);
    }
    if (((cVar1 == '\0') || (*psVar5 != *(short *)PTR_DAT_04bb6298)) ||
       ((0x148 < *(uint *)(psVar5 + 2) || (*(uint *)(psVar5 + 2) != 0x7b)))) {
      if ((param_2 & 1) != 0) {
        if (DAT_054f5738 == 0) {
          if ((DAT_054f0960 & 1) == 0) {
            iVar2 = __cxa_guard_acquire(&DAT_054f0960);
            puVar3 = (uint *)&DAT_054f0958;
            if (iVar2 != 0) {
              DAT_054f0958 = 0;
              __cxa_guard_release(&DAT_054f0960);
              puVar3 = (uint *)&DAT_054f0958;
            }
          }
          else {
            puVar3 = (uint *)&DAT_054f0958;
          }
        }
        else {
          puVar3 = (uint *)(DAT_054f5738 + 0x204);
          if ((ulong)*param_1 < 8) {
            puVar3 = puVar3 + (ulong)*param_1 * 2;
          }
        }
        if ((*puVar3 >> 0xe & 1) != 0) {
          return 1;
        }
      }
      return 0;
    }
  }
  return 1;
}

