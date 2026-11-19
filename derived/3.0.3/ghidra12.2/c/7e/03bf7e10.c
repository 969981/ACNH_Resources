
undefined1 FUN_03bf7e10(long param_1)

{
  int *piVar1;
  Uid *pUVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  piVar1 = (int *)(param_1 + 0x25900);
  pUVar2 = (Uid *)(param_1 + 0x258c0);
  if (*(char *)(param_1 + 0x25904) == '\0') {
    if (0 < *piVar1) {
      iVar3 = nn::friends::DeclareCloseOnlinePlaySession(pUVar2);
      if (iVar3 != 0) goto LAB_03bf7efc;
      if (1 < *piVar1) {
        iVar3 = nn::friends::DeclareCloseOnlinePlaySession((Uid *)(param_1 + 0x258d0));
        if (iVar3 != 0) goto LAB_03bf7efc;
        if (2 < *piVar1) {
          iVar3 = nn::friends::DeclareCloseOnlinePlaySession((Uid *)(param_1 + 0x258e0));
          if (iVar3 != 0) goto LAB_03bf7efc;
          if (3 < *piVar1) {
            iVar3 = nn::friends::DeclareCloseOnlinePlaySession((Uid *)(param_1 + 0x258f0));
            puVar4 = PTR_DAT_04bb2958;
            puVar5 = PTR_DAT_04bb2950;
            if (iVar3 != 0) goto LAB_03bf7efc;
            if (4 < *piVar1) {
              lVar6 = 4;
              do {
                iVar3 = nn::friends::DeclareCloseOnlinePlaySession(pUVar2);
                if (iVar3 != 0) goto LAB_03bf7fbc;
                lVar6 = lVar6 + 1;
              } while (lVar6 < *piVar1);
              goto LAB_03bf7fa4;
            }
          }
        }
      }
    }
  }
  else if (0 < *piVar1) {
    iVar3 = nn::friends::DeclareOpenOnlinePlaySession(pUVar2);
    if (iVar3 != 0) {
LAB_03bf7efc:
      puVar4 = PTR_DAT_04bb2950;
      goto LAB_03bf7fa4;
    }
    if (1 < *piVar1) {
      iVar3 = nn::friends::DeclareOpenOnlinePlaySession((Uid *)(param_1 + 0x258d0));
      if (iVar3 != 0) goto LAB_03bf7efc;
      if (2 < *piVar1) {
        iVar3 = nn::friends::DeclareOpenOnlinePlaySession((Uid *)(param_1 + 0x258e0));
        if (iVar3 != 0) goto LAB_03bf7efc;
        if (3 < *piVar1) {
          iVar3 = nn::friends::DeclareOpenOnlinePlaySession((Uid *)(param_1 + 0x258f0));
          puVar4 = PTR_DAT_04bb2958;
          puVar5 = PTR_DAT_04bb2950;
          if (iVar3 != 0) goto LAB_03bf7efc;
          if (4 < *piVar1) {
            lVar6 = 4;
            do {
              iVar3 = nn::friends::DeclareOpenOnlinePlaySession(pUVar2);
              if (iVar3 != 0) goto LAB_03bf7fbc;
              lVar6 = lVar6 + 1;
            } while (lVar6 < *piVar1);
            goto LAB_03bf7fa4;
          }
        }
      }
    }
  }
  puVar4 = PTR_DAT_04bb2958;
LAB_03bf7fa4:
  return *puVar4;
LAB_03bf7fbc:
  puVar4 = puVar5;
  goto LAB_03bf7fa4;
}

