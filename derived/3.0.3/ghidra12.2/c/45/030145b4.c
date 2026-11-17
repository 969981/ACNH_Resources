
undefined8 FUN_030145b4(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  
  pcVar3 = (char *)param_1[5];
  if (((((*pcVar3 == '/') && (pcVar3[1] == 'L')) && (pcVar3[2] == '_')) &&
      ((pcVar3[3] == 'C' && (pcVar3[4] == 'o')))) &&
     ((((pcVar3[5] == 'l' && ((pcVar3[6] == 'o' && (pcVar3[7] == 'r')))) && (pcVar3[8] == 'P')) &&
      ((((pcVar3[9] == 'a' && (pcVar3[10] == 'l')) && (pcVar3[0xb] == 'e')) &&
       (((pcVar3[0xc] == 't' && (pcVar3[0xd] == 't')) &&
        ((pcVar3[0xe] == 'e' && (pcVar3[0xf] == '_')))))))))) {
    lVar4 = 0;
    cVar5 = '/';
    do {
      if ((pcVar3[lVar4] != cVar5) || (pcVar3[lVar4 + 1] != "/L_ColorPalette00/L_Color_"[lVar4 + 1])
         ) {
        puVar6 = (undefined8 *)param_1[1];
        if (((*PTR_DAT_04bc5228 & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc5228), iVar1 != 0)) {
          *(undefined **)PTR_DAT_04bc5220 = PTR_DAT_04bc4e48 + 0x10;
          __cxa_guard_release(PTR_DAT_04bc5228);
        }
        if ((puVar6 != (undefined8 *)0x0) &&
           (uVar2 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc5220), (uVar2 & 1) != 0)) {
          if (((DAT_056d8068 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056d8068), iVar1 != 0))
          {
            DAT_056d8058 = PTR_DAT_04bb2020 + 0x10;
            DAT_056d8060 = "P_Color_00";
            __cxa_guard_release(&DAT_056d8068);
          }
          if (((DAT_056d80b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056d80b0), iVar1 != 0))
          {
            DAT_056d8070 = PTR_DAT_04bb2020 + 0x10;
            DAT_056d8078 = "State";
            DAT_056d8088 = &DAT_0407ebb1;
            DAT_056d80a8 = &DAT_0407ebb1;
            DAT_056d8098 = &DAT_040fe5ab;
            DAT_056d8080 = DAT_056d8070;
            DAT_056d8090 = DAT_056d8070;
            DAT_056d80a0 = DAT_056d8070;
            __cxa_guard_release(&DAT_056d80b0);
          }
          if (((DAT_056d80c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056d80c8), iVar1 != 0))
          {
            DAT_056d80b8 = 0x200000002;
            DAT_056d80c0 = &DAT_056d8070;
            __cxa_guard_release(&DAT_056d80c8);
          }
          uStack_58 = *param_1;
          local_40 = &DAT_056d80b8;
          local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
          local_50 = &DAT_04af2e58;
          goto LAB_030147ec;
        }
        break;
      }
      cVar5 = "/L_ColorPalette00/L_Color_"[lVar4 + 2];
      lVar4 = lVar4 + 2;
    } while (lVar4 != 0x1a);
    puVar6 = (undefined8 *)param_1[1];
    if (((*PTR_DAT_04bc4ff0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4ff0);
    }
    if ((puVar6 != (undefined8 *)0x0) &&
       (uVar2 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc4fe8), (uVar2 & 1) != 0)) {
      if (((DAT_056d80f0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056d80f0), iVar1 != 0)) {
        DAT_056d80d0 = PTR_DAT_04bb2020 + 0x10;
        DAT_056d80d8 = &DAT_0407c03e;
        DAT_056d80e8 = &DAT_0407ebb1;
        DAT_056d80e0 = DAT_056d80d0;
        __cxa_guard_release(&DAT_056d80f0);
      }
      if (((DAT_056d8108 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056d8108), iVar1 != 0)) {
        DAT_056d80f8 = 0x100000002;
        DAT_056d8100 = &DAT_056d80d0;
        __cxa_guard_release(&DAT_056d8108);
      }
      uStack_58 = *param_1;
      local_50 = (undefined *)0x0;
      local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
      local_40 = &DAT_056d80f8;
LAB_030147ec:
      local_38 = 0;
      local_48 = 0;
      FUN_0386e230(puVar6[2] + 0x208,puVar6[2],&local_60);
      return 1;
    }
  }
  return 0;
}

