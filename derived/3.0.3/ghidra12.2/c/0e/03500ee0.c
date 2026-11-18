
/* WARNING: Removing unreachable block (ram,0x035015bc) */

void FUN_03500ee0(long param_1,uint param_2,ulong param_3)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined4 local_38;
  int local_34;
  
  piVar1 = (int *)(param_1 + 0x1ce20);
  if (*(char *)(param_1 + 0x1d14d) != '\0') {
    return;
  }
  lVar4 = *(long *)(param_1 + 0x220);
  local_38 = 0;
  if (*(long *)(lVar4 + 0x570) == 0) goto switchD_03500f88_default;
  iVar2 = *piVar1;
  if (iVar2 - 3U < 2) goto LAB_03500f30;
  lVar6 = *(long *)PTR_DAT_04bb7bc0;
  local_34 = iVar2;
  if ((lVar6 == 0) || (*(long *)(lVar6 + 0x68) == 0)) goto switchD_03500f88_default;
  switch(iVar2) {
  case 0:
    uVar5 = *(uint *)(lVar6 + 0x170);
    goto LAB_03500fc4;
  case 1:
    uVar5 = *(uint *)(lVar6 + 0x180);
    goto LAB_03500fc4;
  case 2:
    if (*(long *)(lVar6 + 0x1b8) != 0) {
      uVar5 = *(uint *)(lVar6 + 0x1b0);
      goto LAB_03500fc4;
    }
    break;
  case 3:
    uVar5 = *(uint *)(lVar6 + 0x610) & ((int)*(uint *)(lVar6 + 0x610) >> 0x1f ^ 0xffffffffU);
LAB_03500fc4:
    if ((int)uVar5 < 1) break;
LAB_03500f30:
    iVar2 = FUN_034e839c(param_1 + 0x1ce28,&local_38);
    if (iVar2 != 0) {
      lVar4 = *(long *)(param_1 + 0x220);
      break;
    }
    goto LAB_03501598;
  case 4:
    if (*(long *)(lVar6 + 0x1e0) != 0) {
      uVar5 = *(uint *)(lVar6 + 0x1d8);
      goto LAB_03500fc4;
    }
  }
switchD_03500f88_default:
  if (*(long *)(lVar4 + 0x578) == 0) goto switchD_0350103c_default;
  iVar2 = *piVar1;
  if (iVar2 - 3U < 2) goto LAB_03500fe4;
  lVar6 = *(long *)PTR_DAT_04bb7bc0;
  local_34 = iVar2;
  if ((lVar6 == 0) || (*(long *)(lVar6 + 0x68) == 0)) goto switchD_0350103c_default;
  switch(iVar2) {
  case 0:
    uVar5 = *(uint *)(lVar6 + 0x170);
    goto LAB_03501078;
  case 1:
    uVar5 = *(uint *)(lVar6 + 0x180);
    goto LAB_03501078;
  case 2:
    if (*(long *)(lVar6 + 0x1b8) != 0) {
      uVar5 = *(uint *)(lVar6 + 0x1b0);
      goto LAB_03501078;
    }
    break;
  case 3:
    uVar5 = *(uint *)(lVar6 + 0x610) & ((int)*(uint *)(lVar6 + 0x610) >> 0x1f ^ 0xffffffffU);
LAB_03501078:
    if ((int)uVar5 < 2) break;
LAB_03500fe4:
    iVar2 = FUN_034e839c(param_1 + 0x1ce40,&local_38);
    if (iVar2 != 0) {
      lVar4 = *(long *)(param_1 + 0x220);
      break;
    }
    goto LAB_03501598;
  case 4:
    if (*(long *)(lVar6 + 0x1e0) != 0) {
      uVar5 = *(uint *)(lVar6 + 0x1d8);
      goto LAB_03501078;
    }
  }
switchD_0350103c_default:
  if (*(long *)(lVar4 + 0x580) == 0) goto switchD_035010f0_default;
  iVar2 = *piVar1;
  if (iVar2 - 3U < 2) goto LAB_03501098;
  lVar6 = *(long *)PTR_DAT_04bb7bc0;
  local_34 = iVar2;
  if ((lVar6 == 0) || (*(long *)(lVar6 + 0x68) == 0)) goto switchD_035010f0_default;
  switch(iVar2) {
  case 0:
    uVar5 = *(uint *)(lVar6 + 0x170);
    goto LAB_0350112c;
  case 1:
    uVar5 = *(uint *)(lVar6 + 0x180);
    goto LAB_0350112c;
  case 2:
    if (*(long *)(lVar6 + 0x1b8) != 0) {
      uVar5 = *(uint *)(lVar6 + 0x1b0);
      goto LAB_0350112c;
    }
    break;
  case 3:
    uVar5 = *(uint *)(lVar6 + 0x610) & ((int)*(uint *)(lVar6 + 0x610) >> 0x1f ^ 0xffffffffU);
LAB_0350112c:
    if ((int)uVar5 < 3) break;
LAB_03501098:
    iVar2 = FUN_034e839c(param_1 + 0x1ce58,&local_38);
    if (iVar2 != 0) {
      lVar4 = *(long *)(param_1 + 0x220);
      break;
    }
    goto LAB_03501598;
  case 4:
    if (*(long *)(lVar6 + 0x1e0) != 0) {
      uVar5 = *(uint *)(lVar6 + 0x1d8);
      goto LAB_0350112c;
    }
  }
switchD_035010f0_default:
  if (*(long *)(lVar4 + 0x588) == 0) goto switchD_035011a4_default;
  iVar2 = *piVar1;
  if (iVar2 - 3U < 2) goto LAB_0350114c;
  lVar6 = *(long *)PTR_DAT_04bb7bc0;
  local_34 = iVar2;
  if ((lVar6 == 0) || (*(long *)(lVar6 + 0x68) == 0)) goto switchD_035011a4_default;
  switch(iVar2) {
  case 0:
    uVar5 = *(uint *)(lVar6 + 0x170);
    goto LAB_035011e0;
  case 1:
    uVar5 = *(uint *)(lVar6 + 0x180);
    goto LAB_035011e0;
  case 2:
    if (*(long *)(lVar6 + 0x1b8) != 0) {
      uVar5 = *(uint *)(lVar6 + 0x1b0);
      goto LAB_035011e0;
    }
    break;
  case 3:
    uVar5 = *(uint *)(lVar6 + 0x610) & ((int)*(uint *)(lVar6 + 0x610) >> 0x1f ^ 0xffffffffU);
LAB_035011e0:
    if ((int)uVar5 < 4) break;
LAB_0350114c:
    iVar2 = FUN_034e839c(param_1 + 0x1ce70,&local_38);
    if (iVar2 != 0) {
      lVar4 = *(long *)(param_1 + 0x220);
      break;
    }
    goto LAB_03501598;
  case 4:
    if (*(long *)(lVar6 + 0x1e0) != 0) {
      uVar5 = *(uint *)(lVar6 + 0x1d8);
      goto LAB_035011e0;
    }
  }
switchD_035011a4_default:
  if (*(long *)(lVar4 + 0x590) == 0) goto switchD_03501258_default;
  iVar2 = *piVar1;
  if (iVar2 - 3U < 2) goto LAB_03501200;
  lVar6 = *(long *)PTR_DAT_04bb7bc0;
  local_34 = iVar2;
  if ((lVar6 == 0) || (*(long *)(lVar6 + 0x68) == 0)) goto switchD_03501258_default;
  switch(iVar2) {
  case 0:
    uVar5 = *(uint *)(lVar6 + 0x170);
    goto LAB_03501294;
  case 1:
    uVar5 = *(uint *)(lVar6 + 0x180);
    goto LAB_03501294;
  case 2:
    if (*(long *)(lVar6 + 0x1b8) != 0) {
      uVar5 = *(uint *)(lVar6 + 0x1b0);
      goto LAB_03501294;
    }
    break;
  case 3:
    uVar5 = *(uint *)(lVar6 + 0x610) & ((int)*(uint *)(lVar6 + 0x610) >> 0x1f ^ 0xffffffffU);
LAB_03501294:
    if ((int)uVar5 < 5) break;
LAB_03501200:
    iVar2 = FUN_034e839c(param_1 + 0x1ce88,&local_38);
    if (iVar2 != 0) {
      lVar4 = *(long *)(param_1 + 0x220);
      break;
    }
    goto LAB_03501598;
  case 4:
    if (*(long *)(lVar6 + 0x1e0) != 0) {
      uVar5 = *(uint *)(lVar6 + 0x1d8);
      goto LAB_03501294;
    }
  }
switchD_03501258_default:
  if (*(long *)(lVar4 + 0x598) == 0) goto switchD_0350130c_default;
  iVar2 = *piVar1;
  if (iVar2 - 3U < 2) goto LAB_035012b4;
  lVar6 = *(long *)PTR_DAT_04bb7bc0;
  local_34 = iVar2;
  if ((lVar6 == 0) || (*(long *)(lVar6 + 0x68) == 0)) goto switchD_0350130c_default;
  switch(iVar2) {
  case 0:
    uVar5 = *(uint *)(lVar6 + 0x170);
    goto LAB_03501348;
  case 1:
    uVar5 = *(uint *)(lVar6 + 0x180);
    goto LAB_03501348;
  case 2:
    if (*(long *)(lVar6 + 0x1b8) != 0) {
      uVar5 = *(uint *)(lVar6 + 0x1b0);
      goto LAB_03501348;
    }
    break;
  case 3:
    uVar5 = *(uint *)(lVar6 + 0x610) & ((int)*(uint *)(lVar6 + 0x610) >> 0x1f ^ 0xffffffffU);
LAB_03501348:
    if ((int)uVar5 < 6) break;
LAB_035012b4:
    iVar2 = FUN_034e839c(param_1 + 0x1cea0,&local_38);
    if (iVar2 != 0) {
      lVar4 = *(long *)(param_1 + 0x220);
      break;
    }
    goto LAB_03501598;
  case 4:
    if (*(long *)(lVar6 + 0x1e0) != 0) {
      uVar5 = *(uint *)(lVar6 + 0x1d8);
      goto LAB_03501348;
    }
  }
switchD_0350130c_default:
  if (*(long *)(lVar4 + 0x5a0) == 0) goto switchD_035013c0_default;
  iVar2 = *piVar1;
  if (iVar2 - 3U < 2) goto LAB_03501368;
  lVar6 = *(long *)PTR_DAT_04bb7bc0;
  local_34 = iVar2;
  if ((lVar6 == 0) || (*(long *)(lVar6 + 0x68) == 0)) goto switchD_035013c0_default;
  switch(iVar2) {
  case 0:
    uVar5 = *(uint *)(lVar6 + 0x170);
    goto LAB_035013fc;
  case 1:
    uVar5 = *(uint *)(lVar6 + 0x180);
    goto LAB_035013fc;
  case 2:
    if (*(long *)(lVar6 + 0x1b8) != 0) {
      uVar5 = *(uint *)(lVar6 + 0x1b0);
      goto LAB_035013fc;
    }
    break;
  case 3:
    uVar5 = *(uint *)(lVar6 + 0x610) & ((int)*(uint *)(lVar6 + 0x610) >> 0x1f ^ 0xffffffffU);
LAB_035013fc:
    if ((int)uVar5 < 7) break;
LAB_03501368:
    iVar2 = FUN_034e839c(param_1 + 0x1ceb8,&local_38);
    if (iVar2 != 0) {
      lVar4 = *(long *)(param_1 + 0x220);
      break;
    }
    goto LAB_03501598;
  case 4:
    if (*(long *)(lVar6 + 0x1e0) != 0) {
      uVar5 = *(uint *)(lVar6 + 0x1d8);
      goto LAB_035013fc;
    }
  }
switchD_035013c0_default:
  if (*(long *)(lVar4 + 0x5a8) == 0) goto switchD_03501474_default;
  iVar2 = *piVar1;
  if (iVar2 - 3U < 2) goto LAB_0350141c;
  lVar6 = *(long *)PTR_DAT_04bb7bc0;
  local_34 = iVar2;
  if ((lVar6 == 0) || (*(long *)(lVar6 + 0x68) == 0)) goto switchD_03501474_default;
  switch(iVar2) {
  case 0:
    uVar5 = *(uint *)(lVar6 + 0x170);
    goto LAB_035014b0;
  case 1:
    uVar5 = *(uint *)(lVar6 + 0x180);
    goto LAB_035014b0;
  case 2:
    if (*(long *)(lVar6 + 0x1b8) != 0) {
      uVar5 = *(uint *)(lVar6 + 0x1b0);
      goto LAB_035014b0;
    }
    break;
  case 3:
    uVar5 = *(uint *)(lVar6 + 0x610) & ((int)*(uint *)(lVar6 + 0x610) >> 0x1f ^ 0xffffffffU);
LAB_035014b0:
    if ((int)uVar5 < 8) break;
LAB_0350141c:
    iVar2 = FUN_034e839c(param_1 + 0x1ced0,&local_38);
    if (iVar2 != 0) {
      lVar4 = *(long *)(param_1 + 0x220);
      break;
    }
    goto LAB_03501598;
  case 4:
    if (*(long *)(lVar6 + 0x1e0) != 0) {
      uVar5 = *(uint *)(lVar6 + 0x1d8);
      goto LAB_035014b0;
    }
  }
switchD_03501474_default:
  if (*(long *)(lVar4 + 0x5b0) == 0) goto switchD_03501528_default;
  iVar2 = *piVar1;
  if (iVar2 - 3U < 2) goto LAB_035014d0;
  lVar6 = *(long *)PTR_DAT_04bb7bc0;
  local_34 = iVar2;
  if ((lVar6 == 0) || (*(long *)(lVar6 + 0x68) == 0)) goto switchD_03501528_default;
  switch(iVar2) {
  case 0:
    uVar5 = *(uint *)(lVar6 + 0x170);
    goto LAB_03501564;
  case 1:
    uVar5 = *(uint *)(lVar6 + 0x180);
    goto LAB_03501564;
  case 2:
    if (*(long *)(lVar6 + 0x1b8) != 0) {
      uVar5 = *(uint *)(lVar6 + 0x1b0);
      goto LAB_03501564;
    }
    break;
  case 3:
    uVar5 = *(uint *)(lVar6 + 0x610) & ((int)*(uint *)(lVar6 + 0x610) >> 0x1f ^ 0xffffffffU);
LAB_03501564:
    if ((int)uVar5 < 9) break;
LAB_035014d0:
    iVar2 = FUN_034e839c(param_1 + 0x1cee8,&local_38);
    if (iVar2 != 0) {
      lVar4 = *(long *)(param_1 + 0x220);
      break;
    }
    goto LAB_03501598;
  case 4:
    if (*(long *)(lVar6 + 0x1e0) != 0) {
      uVar5 = *(uint *)(lVar6 + 0x1d8);
      goto LAB_03501564;
    }
  }
switchD_03501528_default:
  if (*(long *)(lVar4 + 0x5b8) == 0) {
    return;
  }
  iVar2 = *piVar1;
  if (1 < iVar2 - 3U) {
    lVar4 = *(long *)PTR_DAT_04bb7bc0;
    if (lVar4 == 0) {
      return;
    }
    if (*(long *)(lVar4 + 0x68) == 0) {
      return;
    }
    switch(iVar2) {
    case 0:
      uVar5 = *(uint *)(lVar4 + 0x170);
      break;
    case 1:
      uVar5 = *(uint *)(lVar4 + 0x180);
      break;
    case 2:
      if (*(long *)(lVar4 + 0x1b8) == 0) {
        return;
      }
      uVar5 = *(uint *)(lVar4 + 0x1b0);
      break;
    case 3:
      uVar5 = *(uint *)(lVar4 + 0x610) & ((int)*(uint *)(lVar4 + 0x610) >> 0x1f ^ 0xffffffffU);
      break;
    case 4:
      if (*(long *)(lVar4 + 0x1e0) == 0) {
        return;
      }
      uVar5 = *(uint *)(lVar4 + 0x1d8);
      break;
    default:
      return;
    }
    local_34 = iVar2;
    if ((int)uVar5 < 10) {
      return;
    }
  }
  iVar2 = FUN_034e839c(param_1 + 0x1cf00,&local_38);
  if (iVar2 == 0) {
LAB_03501598:
    local_34 = 10;
    puVar7 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x130);
    if (((*PTR_DAT_04bc5cf0 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc5cf0), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bc5ce8 = PTR_DAT_04bb7c30 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc5cf0);
    }
    if ((puVar7 != (undefined8 *)0x0) &&
       (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc5ce8), (uVar3 & 1) != 0)) {
      if ((param_3 & 1) == 0) {
        FUN_02cbcf94(puVar7,local_38,param_2 & 1);
      }
      else {
        FUN_02cbd0a4(puVar7);
      }
    }
    *(undefined1 *)(param_1 + 0x1d14d) = 1;
  }
  return;
}

