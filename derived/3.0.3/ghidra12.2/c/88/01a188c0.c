
void FUN_01a188c0(undefined8 param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  uint *puVar11;
  long *plVar12;
  long local_78;
  uint local_70;
  uint uStack_6c;
  undefined4 local_68;
  
  FUN_0194a710(&local_78,0);
  puVar7 = PTR_DAT_04bb3ff0;
  puVar6 = PTR_DAT_04bb3fe8;
  puVar5 = PTR_DAT_04bb3350;
  puVar4 = PTR_DAT_04bb3238;
  puVar3 = PTR_DAT_04bb27c0;
  puVar1 = PTR_DAT_04bb3fd0 + 0x10;
  do {
    switch(local_68) {
    case 0:
      uVar2 = local_70;
      if (*(uint *)(local_78 + 0x288) <= local_70) {
        uVar2 = 0;
      }
      lVar10 = *(long *)(local_78 + 0x290) + (long)(int)uVar2 * 0x30;
      uVar2 = uStack_6c;
      if (*(uint *)(lVar10 + 0x10) <= uStack_6c) {
        uVar2 = 0;
      }
      puVar11 = (uint *)(*(long *)(lVar10 + 0x18) + (long)(int)uVar2 * 4);
      break;
    case 1:
      puVar11 = (uint *)(local_78 + 2000);
      break;
    case 2:
      puVar11 = (uint *)(local_78 + 0x860);
      break;
    case 3:
      puVar11 = (uint *)(local_78 + 0x8c4);
      break;
    case 4:
      puVar11 = (uint *)(local_78 + 0x8c8);
      break;
    case 5:
      return;
    default:
      puVar11 = (uint *)puVar4;
    }
    uVar2 = *puVar11;
    if ((((uVar2 == 0) ||
         (plVar12 = *(long **)(*(long *)(*(long *)(*(long *)puVar3 + 0x1c0) + 8) +
                              ((ulong)(uVar2 >> 0x11) & 0x7ff8)), plVar12 == (long *)0x0)) ||
        ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar12 + 0x46) != uVar2)) {
      plVar12 = (long *)0x0;
    }
    iVar8 = *(int *)(*(long *)puVar3 + 0x288);
    if (iVar8 == 1 || iVar8 == -1) {
      plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
      (**(code **)(*plVar9 + 0x60))();
    }
    if (((*puVar7 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar7), iVar8 != 0)) {
      *(undefined **)puVar6 = puVar1;
      __cxa_guard_release(puVar7);
    }
    (**(code **)(*plVar12 + 0x20))(plVar12,puVar6);
    FUN_01947d40(plVar12,param_1);
    FUN_0194afc0(&local_78);
  } while( true );
}

