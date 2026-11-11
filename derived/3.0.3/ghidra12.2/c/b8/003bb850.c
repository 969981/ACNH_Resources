
undefined8 FUN_003bb850(undefined8 param_1,long param_2,int param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  long local_48;
  
  lVar1 = nn::os::GetSystemTick();
  if (4 < *(uint *)(param_2 + 0x14)) {
                    /* WARNING: Subroutine does not return */
    nn::detail::UnexpectedDefaultImpl();
  }
  lVar4 = (ulong)*(ushort *)(param_2 + 0x18) * 1000000;
  switch(*(uint *)(param_2 + 0x14)) {
  case 1:
    lVar4 = 0x7009d32da30000;
  case 2:
    lVar5 = *(long *)(param_5 + 8);
    if (lVar5 != param_5) {
      lVar3 = 0;
      bVar6 = true;
      do {
        while( true ) {
          lVar2 = lVar5 + -0x1e0;
          lVar5 = *(long *)(lVar5 + 8);
          local_48 = 0;
          FUN_003cfe70(&local_48,lVar2);
          if (local_48 == 0) break;
          if (*(int *)(local_48 + 0x110) == param_3) goto LAB_003bb92c;
LAB_003bb8e0:
          FUN_003cfe24(&local_48);
          if (lVar5 == param_5) {
            if (bVar6) {
              return 0;
            }
            goto LAB_003bb958;
          }
        }
        if (param_3 != -1) goto LAB_003bb8e0;
LAB_003bb92c:
        if (*(long *)(local_48 + 0x38) != param_4) goto LAB_003bb8e0;
        lVar3 = *(long *)(local_48 + 0x118);
        FUN_003cfe24(&local_48);
        bVar6 = false;
      } while (lVar5 != param_5);
LAB_003bb958:
      lVar1 = nn::os::ConvertToTimeSpan(lVar1 - lVar3);
      if (lVar1 < lVar4) {
        return 4;
      }
    }
    break;
  case 3:
    lVar4 = 0x7009d32da30000;
  case 4:
    lVar5 = *(long *)(param_5 + 8);
    while (lVar5 != param_5) {
      lVar3 = lVar5 + -0x1e0;
      lVar5 = *(long *)(lVar5 + 8);
      local_48 = 0;
      FUN_003cfe70(&local_48,lVar3);
      if (local_48 == 0) {
        if (param_3 == -1) goto LAB_003bb9dc;
      }
      else if (*(int *)(local_48 + 0x110) == param_3) {
LAB_003bb9dc:
        if (((*(long *)(local_48 + 0x38) == param_4) &&
            (lVar3 = nn::os::ConvertToTimeSpan(lVar1 - *(long *)(local_48 + 0x118)), lVar3 < lVar4))
           && (local_48 != 0)) {
          FUN_003ceb1c(local_48,0);
        }
      }
      FUN_003cfe24(&local_48);
    }
  }
  return 0;
}

