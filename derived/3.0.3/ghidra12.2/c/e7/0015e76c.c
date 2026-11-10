
int FUN_0015e76c(long *param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char *__s;
  long lVar7;
  long *plVar8;
  long lVar9;
  long local_78 [3];
  
  lVar9 = *param_1;
  local_78[2] = param_3;
  local_78[1] = 0;
  if ((param_2 & 1) == 0) {
    local_78[0] = *(long *)(lVar9 + 0x808);
    if (((*(uint *)((long)param_1 + 0x41c) & 0x4020) == 0x20) &&
       ((*(byte *)(lVar9 + 0xf60) >> 4 & 1) != 0)) {
      local_78[1] = *(undefined8 *)(lVar9 + 0x810);
      lVar4 = 2;
      goto LAB_0015e7f0;
    }
  }
  else {
    if ((*(byte *)(lVar9 + 0xf60) >> 4 & 1) == 0) {
      local_78[0] = *(long *)(lVar9 + 0x808);
    }
    else {
      local_78[0] = *(long *)(lVar9 + 0x810);
    }
  }
  lVar4 = 1;
LAB_0015e7f0:
  lVar5 = 0;
  do {
    for (plVar8 = (long *)local_78[lVar5]; plVar8 != (long *)0x0; plVar8 = (long *)plVar8[1]) {
      __s = (char *)*plVar8;
      pcVar2 = strchr(__s,0x3a);
      if (pcVar2 == (char *)0x0) {
        pcVar2 = strchr(__s,0x3b);
        if (pcVar2 != (char *)0x0) {
          lVar7 = 0;
          do {
            lVar6 = lVar7;
            if (pcVar2[lVar6 + 1] == '\0') goto LAB_0015e990;
            iVar1 = FUN_00146528();
            lVar7 = lVar6 + 1;
          } while (iVar1 != 0);
          if (pcVar2[lVar6 + 1] == '\0') {
LAB_0015e990:
            if (pcVar2[lVar6] != ';') goto LAB_0015e824;
            lVar7 = FUN_00143320(*plVar8);
            if (lVar7 == 0) {
              FUN_0015e0d0(local_78 + 2);
              return 0x1b;
            }
            pcVar2[lVar6 + (lVar7 - *plVar8)] = ':';
            pcVar2 = pcVar2 + (lVar7 - *plVar8) + lVar6;
            goto LAB_0015e82c;
          }
        }
      }
      else {
LAB_0015e824:
        lVar7 = 0;
LAB_0015e82c:
        do {
          pcVar2 = pcVar2 + 1;
          if (*pcVar2 == '\0') {
            cVar3 = '\0';
            goto joined_r0x0015e850;
          }
          iVar1 = FUN_00146528();
        } while (iVar1 != 0);
        cVar3 = *pcVar2;
joined_r0x0015e850:
        if ((lVar7 != 0) || (cVar3 != '\0')) {
          lVar6 = lVar7;
          if (lVar7 == 0) {
            lVar6 = *plVar8;
          }
          if ((param_1[0x95] == 0) || (iVar1 = thunk_FUN_00144b34("Host:",lVar6,5), iVar1 == 0)) {
            iVar1 = *(int *)(lVar9 + 0xa38);
            if (iVar1 == 3) {
              iVar1 = thunk_FUN_00144b34("Content-Type:",lVar6,0xd);
              if (iVar1 != 0) goto LAB_0015e930;
              iVar1 = *(int *)(lVar9 + 0xa38);
            }
            if (((((iVar1 == 4) &&
                  (iVar1 = thunk_FUN_00144b34("Content-Type:",lVar6,0xd), iVar1 != 0)) ||
                 ((*(char *)((long)param_1 + 0x41d) < '\0' &&
                  (iVar1 = thunk_FUN_00144b34("Content-Length:",lVar6,0xf), iVar1 != 0)))) ||
                (((param_1[0x98] != 0 &&
                  (iVar1 = thunk_FUN_00144b34("Connection:",lVar6,0xb), iVar1 != 0)) ||
                 (((int)param_1[0x46] == 0x14 &&
                  (iVar1 = thunk_FUN_00144b34("Transfer-Encoding:",lVar6,0x12), iVar1 != 0)))))) ||
               ((((iVar1 = thunk_FUN_00144b34("Authorization:",lVar6,0xe), iVar1 != 0 ||
                  (iVar1 = thunk_FUN_00144b34("Cookie:",lVar6,7), iVar1 != 0)) &&
                 ((*(ushort *)(lVar9 + 0x15c4) >> 1 & 1) != 0)) &&
                (((*(long *)(lVar9 + 0x1168) != 0 && ((*(byte *)(lVar9 + 0xf62) >> 4 & 1) == 0)) &&
                 (iVar1 = FUN_00144a90(*(long *)(lVar9 + 0x1168),param_1[0x1a]), iVar1 == 0))))))
            goto LAB_0015e930;
            iVar1 = FUN_0015e3d4(local_78 + 2,&DAT_040e1e8e,lVar6);
          }
          else {
LAB_0015e930:
            iVar1 = 0;
          }
          if (lVar7 != 0) {
            FUN_00143300(lVar7);
          }
          if (iVar1 != 0) {
            return iVar1;
          }
        }
      }
    }
    lVar5 = lVar5 + 1;
    if (lVar5 == lVar4) {
      return 0;
    }
  } while( true );
}

